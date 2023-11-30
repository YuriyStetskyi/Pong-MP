// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include <string>
#include "Net/UnrealNetwork.h"

// Sets default values
ABall::ABall()
	:speedStart(1000),
	speedLimit(2000),
	speedUp_Amount(150),
	isOverlapping(false),
	pointsToWin(5)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//components
	sphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	SetRootComponent(sphereCollider);
	ballMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
	ballMesh->SetupAttachment(sphereCollider);
	this->SetReplicates(true); //DONT FORGET TO SET YOUR ACTOR TO BE ABLE TO REPLICATE
	this->SetReplicateMovement(true);
	NetUpdateFrequency = 6000.0f;
	speed = speedStart;
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
	
	if (HasAuthority())
	{
		SetRandomDirection(movementDirection);
		movementDirection.Normalize();
	}

	FindPlatforms();
	
}

void ABall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABall, newLocation);
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	gamemode = (AMyGameModeBase*)UGameplayStatics::GetGameMode(this);
	
	if (gamemode && gamemode->allPlayersAreLoggedIn && HasAuthority())
	{
		Multicast_MoveRandomly(DeltaTime);
	}

	CheckForGameOver();

}

void ABall::MoveRandomly(float deltaTime)
{
	FVector velocity = movementDirection * speed;
	newLocation = GetActorLocation() + (velocity * deltaTime);
	SetActorLocation(newLocation, true); //if dont setup bSweep to true wont get FHitResult later
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
			speed += speedUp_Amount;
			SpeedUpNextCollision = false;
			//cant return here because after speed up it still has to collide with platform
		}

		//goal
		if (OtherActor->ActorHasTag("blue_goal"))
		{
			((APlayer_Platform*)client_platform)->points += 1;
			SetActorLocation(startLocation);
			cpp_RestartGame();
			return;
		}
		else if (OtherActor->ActorHasTag("red_goal"))
		{
			((APlayer_Platform*)host_platform)->points += 1;
			SetActorLocation(startLocation);
			cpp_RestartGame();
			return;
		}

		//advanced collision when platform is hitting
		if (OtherActor->ActorHasTag("BluePlayerPlatform") || OtherActor->ActorHasTag("RedPlayerPlatform"))
		{
			if (PlatformWasHitInFront(OtherActor, SweepResult.ImpactNormal))
			{
				GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Blue, OtherComp->GetName() + " hit in front");
				FVector adjustmentVector = SweepResult.Location - OtherActor->GetTransform().GetLocation();
				adjustmentVector.Z = 0;
				adjustmentVector.Normalize();
				//FVector reflectionVector = FMath::GetReflectionVector(movementDirection, SweepResult.ImpactNormal);	
				movementDirection = OtherActor->GetActorForwardVector() + adjustmentVector;
				movementDirection.Normalize();
				return;
			}
				
		}


		//default
		//NOTE FOR FUTURE
		//i think it still might go out of bounds in the corner (if two overlaps happen, second one will be ignored
		//and this way object will go out of bounds, but this is fixable by taking dot product of the two reflection vectors,
		//if dot product is positive it means they point in general direction which means ball wont go out of bounds if we allow
		//both collisions to happen, but if its negative - omit second collision
		if (!isOverlapping)
		{
			isOverlapping = true;
			firstOverlapVector = movementDirection;
			movementDirection = FMath::GetReflectionVector(movementDirection, SweepResult.ImpactNormal); //to get Fhitresult make sure ur colliding with boxcollider and not mesh

		}
		else if (isOverlapping && (!OtherActor->ActorHasTag("BluePlayerPlatform") || !OtherActor->ActorHasTag("RedPlayerPlatform")))
		{
			FVector currentReflection = FMath::GetReflectionVector(movementDirection, SweepResult.ImpactNormal);
			if (FVector::DotProduct(firstOverlapVector, currentReflection) <= 0)
			{
				movementDirection = currentReflection;
			}
			//if dot product of those two vectors are positive ignore this tick because it already 
			//bounced back and double collision will mean it will bounce outside
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
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, "BALL WENT OUTSIDE PLAY ZONE(FIND A BUG)", true, FVector2D(1.5, 1.5));
			speed = speedStart;
			SetActorLocation(startLocation);
			SetRandomDirection(movementDirection);
			movementDirection.Normalize();
			return;
		}

		if (OtherActor->ActorHasTag("SpeedUp"))
		{
			return;
		}

		if (isOverlapping)
		{
			isOverlapping = false;
		}
		else if (!isOverlapping)
		{
			//its always overlapping when ending overlap
		}
	}
	
}

bool ABall::PlatformWasHitInFront(AActor* OtherActor, const FVector& hitResultsNormalVector)
{
	FVector platformsForwardVector = OtherActor->GetActorForwardVector();
	if (FVector::DotProduct(platformsForwardVector, hitResultsNormalVector) > 0 )
		return true;
	else
		return false;
}

void ABall::SetRandomDirection(FVector& movementDirectionVector)
{
	do
	{
		movementDirectionVector.X = (double)(rand() % 201) / 100 - 1; //get random value [-1,1]
		movementDirectionVector.Y = (double)(rand() % 201) / 100 - 1;
	} 
	while ((movementDirectionVector.Y > 0.8 || movementDirectionVector.Y < -0.8) || (movementDirectionVector.X > -0.2 && movementDirectionVector.X < 0.2));
	
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
	if (((APlayer_Platform*)host_platform)->points == pointsToWin)
	{
		ResetBall();
	}
	else if (((APlayer_Platform*)client_platform)->points == pointsToWin)
	{
		ResetBall();
	}
}

void ABall::ResetBall()
{
	SetActorLocation(startLocation);
	speed = 0;
}

void ABall::cpp_RestartGame()
{
	speed = speedStart;
	SetRandomDirection(movementDirection);
	movementDirection.Normalize();
}
