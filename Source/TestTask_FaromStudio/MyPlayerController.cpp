// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"
#include "MyPlayerState.h"
#include "Net/UnrealNetwork.h"

AMyPlayerController::AMyPlayerController()
	:movementInput(0),
	found_bluePlatform(nullptr),
	found_redPlatform(nullptr),
	allPlayersLoggedIn(false)
{
	SetReplicates(true);
}

void AMyPlayerController::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	if (allPlayersLoggedIn && HasAuthority()) 
	{
		MultiCast_MoveOnInput(found_bluePlatform, movementInput, deltaTime);
	}

	if (!HasAuthority())
	{
		MoveOnInput(found_redPlatform, movementInput, deltaTime);
		Server_MoveOnInput(found_redPlatform, movementInput, deltaTime);
	}
	
}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->SetIsReplicated(true);
	FindPlatforms();

	InputComponent->BindAxis("RightLeft", this, &AMyPlayerController::RightLeftMove);
	found_bluePlatform->SetActorHiddenInGame(false);
	found_redPlatform->SetActorHiddenInGame(false);	
}

void AMyPlayerController::MoveOnInput(AActor* pawn, float mInput, float deltaTime)
{
	if (pawn != NULL)
	{
		FVector rightVectorDirection = pawn->GetActorRightVector() * mInput;
		rightVectorDirection.Normalize();

		FVector velocity = rightVectorDirection * 800;
		FVector newLocation = pawn->GetActorLocation() + (velocity * deltaTime);

		//managing collision with walls
		APlayer_Platform* pawnCasted = (APlayer_Platform*)pawn;
		if (pawnCasted->isHittingWall && !pawnCasted->otherActorIsBall && velocity != FVector::ZeroVector)
		{
			FVector slideDirection = pawnCasted->wallNormal;
			FVector slideVelocity = slideDirection * 800;
			newLocation += slideVelocity * deltaTime;
		}
		pawn->SetActorLocation(newLocation, true);
	
	}
}

void AMyPlayerController::RightLeftMove(float value)
{
	if (FMath::Abs(value) > 0.2)
	{
		movementInput = value;
	}
	else
	{
		movementInput = 0;
	}
}

void AMyPlayerController::FindPlatforms()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), FoundActors);
	found_bluePlatform = FindActorByTag(FoundActors, "BluePlayerPlatform");
	found_redPlatform = FindActorByTag(FoundActors, "RedPlayerPlatform");
}

AActor* AMyPlayerController::FindActorByTag(TArray<AActor*>& actors, const FName& tag)
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

void AMyPlayerController::Server_MoveOnInput_Implementation(AActor* thePawn, float mInput, float deltaTime)
{
	MoveOnInput(thePawn, mInput, deltaTime);
}

void AMyPlayerController::MultiCast_MoveOnInput_Implementation(AActor* thePawn, float mInput, float deltaTime)
{
	MoveOnInput(thePawn, mInput, deltaTime);
}


