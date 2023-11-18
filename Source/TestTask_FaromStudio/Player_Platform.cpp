// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Platform.h"
#include <string>

// Sets default values
APlayer_Platform::APlayer_Platform()
	:wallNormal(0, 0, 0)
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
	alreadyPosessed = false;
	isHittingWall = false;

	NetUpdateFrequency = 3000.0f;
	points = 0;
	
}

// Called when the game starts or when spawned
void APlayer_Platform::BeginPlay()
{
	Super::BeginPlay();
	boxCollider->OnComponentBeginOverlap.AddDynamic(this, &APlayer_Platform::OnOverlapBegin);
	boxCollider->OnComponentEndOverlap.AddDynamic(this, &APlayer_Platform::OnOverlapEnd);

	if (HasAuthority())
	{
		server_local = this->GetLocalRole();
		server_remote = this->GetRemoteRole();
	}
	else
	{
		client_local = this->GetLocalRole();
		client_remote = this->GetRemoteRole();
	}
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
	//when setting location add true to get a sweep
	if (HasAuthority()) //otherwise i get message logged twice and i spent an hour trying to figure out why
	{
		//GEngine->AddOnScreenDebugMessage(-1, 0.7f, FColor::Blue, OtherComp->GetName() + " hit the platform");
	}
	//wall collision detection
	wallNormal = SweepResult.ImpactNormal;
	otherActorIsBall = OtherActor->Tags.Contains("ball");
	isHittingWall = true;
}

void APlayer_Platform::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (HasAuthority())
	{
		//GEngine->AddOnScreenDebugMessage(-1, 0.7f, FColor::Purple, OtherComp->GetName() + " stopped hitting platform");
	}
	isHittingWall = false;
}


