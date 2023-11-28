// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MyGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class TESTTASK_FAROMSTUDIO_API AMyGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	//AMyGameStateBase();
	//virtual void Tick(float deltaTime) override;


	////looking for controllers
	//TArray<AActor*> FoundActors;
	//AActor* hostController;
	//AActor* clientController;
	//void FindControllers();
	//AActor* FindActorByTag(TArray<AActor*>& actors, const FName& tag);

	////track if players want to rematch
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//bool hostWantsToRematch;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//bool clientWantsToRematch;

	//void CheckPlayersRematch();
	//void TellPlayerToReplay();
	
};
