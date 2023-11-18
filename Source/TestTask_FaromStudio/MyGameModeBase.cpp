// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

AMyGameModeBase::AMyGameModeBase()
	:playersCount(0),
	allPlayersAreLoggedIn(false)
{
	PlayerControllerClass = AMyPlayerController::StaticClass();
	srand(time(NULL));	
	
}

void AMyGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	++playersCount;
	FindPlatforms();
	
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "a player Logged in");

	if (playersCount == 1)
	{
		P1_controller = (AMyPlayerController*)NewPlayer; //first thing you should do
		
		FInputModeGameOnly inputMode;
		P1_controller->SetInputMode(inputMode);
		P1_controller->bShowMouseCursor = false;

		P1_controller->Possess((APawn*)P1_platform);
	}
	else if (playersCount == 2)
	{
		P2_controller = (AMyPlayerController*)NewPlayer; //first thing you should do
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "All Players Logged in :)");
		
		FInputModeGameOnly inputMode;
		P2_controller->SetInputMode(inputMode);
		P2_controller->bShowMouseCursor = false;

		P2_controller->Possess((APawn*)P2_platform);
		allPlayersAreLoggedIn = true;
		P1_controller->allPlayersLoggedIn = true;
		P2_controller->allPlayersLoggedIn = true;
	}
	else if(playersCount > 2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "more than 2 players are trying to login ");
	}
}

void AMyGameModeBase::FindPlatforms()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), FoundActors);
	P1_platform = FindActorByTag(FoundActors, "BluePlayerPlatform");
	P2_platform = FindActorByTag(FoundActors, "RedPlayerPlatform");
}

AActor* AMyGameModeBase::FindActorByTag(TArray<AActor*>& actors, const FName& tag)
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


void AMyGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{	
	Super::InitGame(MapName, Options, ErrorMessage);	
}
