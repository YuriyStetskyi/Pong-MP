// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Player_Platform.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TESTTASK_FAROMSTUDIO_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
private:


public:
	AMyPlayerController();
	virtual void SetupInputComponent() override;
	virtual void Tick(float deltaTime) override;
	//couldnt use gamemodes allplayerslogged in because of circular
	//dependency. didnt have time to make another solution
	bool allPlayersLoggedIn;
	
	//scoring system
	UPROPERTY(VisibleAnywhere, Category = "MyStuff")
	int points;
private:

	//movement
	UPROPERTY(EdiTAnywhere, Category = "MyStuff")
	float movementInput;
	void RightLeftMove(float value);
	void MoveOnInput(AActor* pawn, float mInput, float deltaTime);


	UPROPERTY(EdiTAnywhere, Category = "MyStuff")
	APawn* posessedPawn;
	
	//finding actors
	UPROPERTY(EdiTAnywhere, Category = "MyStuff")
	TArray<AActor*> FoundActors;
	void FindPlatforms();
	AActor* found_bluePlatform;
	AActor* found_redPlatform;
	AActor* FindActorByTag(TArray<AActor*>& FoundActors, const FName& tag);
	void ToggleVisibility();

	//components
	UCameraComponent* CameraComponent;

	//RPC's
	UFUNCTION(Server, Reliable)
	void Server_MoveOnInput(AActor* thePawn, float mInput, float deltaTime);
	void Server_MoveOnInput_Implementation(AActor* thePawn, float mInput, float deltaTime);
	UFUNCTION(NetMulticast, Reliable)
	void MultiCast_MoveOnInput(AActor* thePawn, float mInput, float deltaTime);
	void MultiCast_MoveOnInput_Implementation(AActor* thePawn, float mInput, float deltaTime);
	
	
};
