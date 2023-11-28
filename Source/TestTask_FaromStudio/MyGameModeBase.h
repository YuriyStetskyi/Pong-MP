// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyPlayerController.h"
#include "Player_Platform.h"
#include "MyGameStateBase.h"
#include "MyPlayerState.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TESTTASK_FAROMSTUDIO_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:

	//base
	AMyGameModeBase();
	void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	void Tick(float DeltaTime);

	//login handling
	void PostLogin(APlayerController* NewPlayer);
	bool allPlayersAreLoggedIn; 

	//checking if players want to rematch
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool hostWantsToRematch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool clientWantsToRematch;

private:

	void CheckIfPlayersWantToRematch();

	//players
	AMyPlayerController* P1_controller;
	AMyPlayerController* P2_controller;
	int playersCount;

	void FindPlatforms();
	AActor* FindActorByTag(TArray<AActor*>& FoundActors, const FName& tag);
	TArray<AActor*> FoundActors;
	AActor* P1_platform;
	AActor* P2_platform;
};
