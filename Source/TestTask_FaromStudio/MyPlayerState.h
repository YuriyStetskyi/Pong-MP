// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class TESTTASK_FAROMSTUDIO_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bothPlayersWantToRematch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool thisPlayerWantsToRematch;
	
};
