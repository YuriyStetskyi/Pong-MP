// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Platform.h"
#include <string>

// Sets default values
APlayer_Platform::APlayer_Platform()
	:wallNormal(0, 0, 0),
	alreadyPosessed(false),
	isHittingWall(false),
	otherActorIsBall(false),
	points(0),
	bothPlayersWantToRematch(false),
	thisPlayerWantsToRematch(false),
	platformHidden(false)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//setup components
	boxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	SetRootComponent(boxCollider);
	playerPlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	playerPlatformMesh->SetupAttachment(boxCollider);
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(boxCollider);

	//initializing stuff
	SetReplicates(true);
	SetReplicateMovement(true);
	NetUpdateFrequency = 10000.0f;

	
}

// Called when the game starts or when spawned
void APlayer_Platform::BeginPlay()
{
	Super::BeginPlay();
	boxCollider->OnComponentBeginOverlap.AddDynamic(this, &APlayer_Platform::OnOverlapBegin);
	boxCollider->OnComponentEndOverlap.AddDynamic(this, &APlayer_Platform::OnOverlapEnd);
}

// Called every frame
void APlayer_Platform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayer_Platform::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APlayer_Platform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(APlayer_Platform, platformHidden);
	DOREPLIFETIME(APlayer_Platform, points);
	DOREPLIFETIME(APlayer_Platform, bothPlayersWantToRematch);
	DOREPLIFETIME(APlayer_Platform, thisPlayerWantsToRematch);
}

void APlayer_Platform::cpp_Server_SetThisPlayerWantsToRematch_Implementation(bool playerWantsToRematch)
{
	thisPlayerWantsToRematch = playerWantsToRematch;
}

void APlayer_Platform::cpp_Multicast_SetThisPlayerWantsToRematch_Implementation(bool playerWantsToRematch)
{
	thisPlayerWantsToRematch = playerWantsToRematch;
}

void APlayer_Platform::OnRep_HidePlatform()
{
	if (platformHidden)
	{
		SetHidden(true);
	}
	else
	{
		SetHidden(false);
	}
}

void APlayer_Platform::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//wall collision detection
	if (!(OtherActor->Tags.Contains("ball")))
	{
		wallNormal = SweepResult.ImpactNormal;
		isHittingWall = true;
	}
	else
	{
		otherActorIsBall = true;
	}
}

void APlayer_Platform::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (HasAuthority())
	{
		//GEngine->AddOnScreenDebugMessage(-1, 0.7f, FColor::Purple, OtherComp->GetName() + " stopped hitting platform");
	}
	if (!(OtherActor->Tags.Contains("ball")))
	{
		isHittingWall = false;
	}
	else
	{
		otherActorIsBall = false;
	}
}


