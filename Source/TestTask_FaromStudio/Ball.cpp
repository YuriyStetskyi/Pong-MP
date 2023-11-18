// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include <string>
#include "Net/UnrealNetwork.h"

// Sets default values
ABall::ABall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	sphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	SetRootComponent(sphereCollider);
	ballMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
	ballMesh->SetupAttachment(sphereCollider);
	role = this->GetLocalRole();
	this->SetReplicates(true); //DONT FORGET TO SET YOUR ACTOR TO BE ABLE TO REPLICATE
	this->SetReplicateMovement(true);
	NetUpdateFrequency = 3000.0f;
	isOverlapping = false;
	speed = 1000;
	speedLimit = 2000;
}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	gamemode = (AMyGameModeBase*)UGameplayStatics::GetGameMode(this);
	Super::BeginPlay();
	srand(time(NULL));
	startLocation = GetActorLocation();
	sphereCollider->OnComponentBeginOverlap.AddDynamic(this, &ABall::OnOverlapBegin);
	sphereCollider->OnComponentEndOverlap.AddDynamic(this, &ABall::OnOverlapEnd);
	
	//didnt have time to figure out why cant access gamemode from client, 
	//or other way to make random starting vector work so its hardcoded
	if (HasAuthority())
	{
		//movementDirection = GetActorForwardVector();/* +GetActorRightVector() * 0.8;*/
		SetRandomDirection(movementDirection);
		movementDirection.Normalize();
	}

	FindBall();
	FindPlatforms();
	
}

void ABall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	//DOREPLIFETIME(ABall, movementDirection);
	DOREPLIFETIME(ABall, newLocation);
	DOREPLIFETIME(ABall, storedDirection);
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	gamemode = (AMyGameModeBase*)UGameplayStatics::GetGameMode(this);
	
	if (gamemode && gamemode->allPlayersAreLoggedIn && HasAuthority())
	{
		//MoveRandomly(DeltaTime);
		Multicast_MoveRandomly(DeltaTime);
		//Client_MoveRandomly(DeltaTime);

	}
	else if (!HasAuthority())
	{
		//MoveRandomly(DeltaTime);
		//Server_MoveRandomly(DeltaTime);
	}

	CheckForGameOver();

}

void ABall::MoveRandomly(float deltaTime)
{
	FVector velocity = movementDirection * speed;
	newLocation = GetActorLocation() + (velocity * deltaTime);
	SetActorLocation(newLocation, true); //if dont setup bSweep to true wont get FHitResult later
}


void ABall::FindBall()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), FoundActors);
	foundBall = FindActorByTag(FoundActors, "ball");
}

void ABall::FindPlatforms()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), FoundActors);
	host_platform = FindActorByTag(FoundActors, "BluePlayerPlatform");
	client_platform = FindActorByTag(FoundActors, "RedPlayerPlatform");
}



AActor* ABall::FindActorByTag(TArray<AActor*>& actors, const FName& tag)
{
	for (AActor* actor : actors)
	{
		if (actor && actor->ActorHasTag(tag))
		{
			return actor;
		}
	}
	return nullptr;
}


void ABall::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{		
		
	//speed up the ball
	if (HasAuthority())
	{
		//this is just while i haven't fixed the collision on the corners
		if (OtherActor->ActorHasTag("PlayZone"))
		{
			//do nothing
			return;
		}

		//speed up
		if (OtherActor->ActorHasTag("SpeedUp"))
		{
			SpeedUpNextCollision = true;
			return;
		}
		else if (speed <= speedLimit && SpeedUpNextCollision && (OtherActor->ActorHasTag("BluePlayerPlatform") || OtherActor->ActorHasTag("RedPlayerPlatform")))
		{
			speed += 150;
			SpeedUpNextCollision = false;
			//cant return here because after speed up it still has to collide with platform
		}

		//goal
		if (OtherActor->ActorHasTag("blue_goal"))
		{
			((APlayer_Platform*)client_platform)->points += 1;
			int pts = ((APlayer_Platform*)client_platform)->points;
			FString Message = FString::Printf(TEXT("RED SCORED: %d"), pts);
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, Message, true, FVector2D(2, 2));
			speed = 1000;
			SetActorLocation(startLocation);
			SetRandomDirection(movementDirection);
			movementDirection.Normalize();
			return;
		}
		else if (OtherActor->ActorHasTag("red_goal"))
		{
			((APlayer_Platform*)host_platform)->points += 1;
			int pts = ((APlayer_Platform*)host_platform)->points;
			FString Message = FString::Printf(TEXT("BLUE SCORED: %d"), pts);
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, Message, true, FVector2D(2, 2));
			speed = 1000;
			SetActorLocation(startLocation);
			SetRandomDirection(movementDirection);
			movementDirection.Normalize();
			return;
		}

		//default
		if (!isOverlapping)
		{
			isOverlapping = true;
			//GEngine->AddOnScreenDebugMessage(-1, 0.7f, FColor::Magenta, "ball hit " + OtherComp->GetName());
			movementDirection = FMath::GetReflectionVector(movementDirection, SweepResult.ImpactNormal); //to get Fhitresult make sure ur colliding with boxcollider and not mesh
		} //saving from bugs
		else if (isOverlapping && (!OtherActor->ActorHasTag("BluePlayerPlatform") || !OtherActor->ActorHasTag("RedPlayerPlatform")))
		{
			storedDirection = FMath::GetReflectionVector(movementDirection, SweepResult.ImpactNormal);
		}
		
	}


	
}

void ABall::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (HasAuthority())
	{
		if (OtherActor->ActorHasTag("PlayZone"))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, "FIX THIS BUG FOR GODS SAKE", true, FVector2D(1.5, 1.5));
			speed = 1000;
			SetActorLocation(startLocation);
			SetRandomDirection(movementDirection);
			movementDirection.Normalize();
			return;
		}

		if (OtherActor->ActorHasTag("SpeedUp"))
		{
			return;
		}

		if (HasAuthority() && isOverlapping)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 0.7f, FColor::Cyan, "ball left " + OtherComp->GetName());
			isOverlapping = false;
		}
		else if (HasAuthority() && !isOverlapping && (!OtherActor->ActorHasTag("BluePlayerPlatform") || !OtherActor->ActorHasTag("RedPlayerPlatform")))
		{
			movementDirection = storedDirection;
		}
	}
	
}

void ABall::SetRandomDirection(FVector& movementDirectionVector)
{
	movementDirectionVector.X = (double)(rand() % 201) / 100 - 1; //get random value [-1,1]
	movementDirectionVector.Y = (double)(rand() % 201) / 100 - 1;
	movementDirectionVector.Z = 0;
}



void ABall::Client_MoveRandomly_Implementation(float deltaTime)
{
	MoveRandomly(deltaTime);
}

void ABall::Multicast_MoveRandomly_Implementation(float deltaTime)
{
	if (HasAuthority())
	{
		MoveRandomly(deltaTime);
	}
	else
	{
		SetActorLocation(newLocation, true);
	}

}

void ABall::Server_MoveRandomly_Implementation(float deltaTime)
{
	MoveRandomly(deltaTime);
}

void ABall::CheckForGameOver()
{
	if (((APlayer_Platform*)host_platform)->points == 5)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1000000, FColor::Blue, "GAME OVER - BLUE WINS", true, FVector2D(3, 3));
		ResetBall();
	}
	else if (((APlayer_Platform*)client_platform)->points == 5)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1000000, FColor::Red, "GAME OVER - RED WINS", true, FVector2D(3, 3));
		ResetBall();
	}
}

void ABall::ResetBall()
{
	SetActorLocation(startLocation);
	speed = 0;
	((APlayer_Platform*)host_platform)->points = 0;
	((APlayer_Platform*)client_platform)->points = 0;
}
