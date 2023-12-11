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
	
	//multiplayer
	bool allPlayersLoggedIn;	
	
private:


	//movement
	UPROPERTY(EdiTAnywhere, Category = "MyStuff")
	float movementInput;
	FVector cachedSlideDirection;
	void RightLeftMove(float value);
	void MoveOnInput(AActor* pawn, float mInput, float deltaTime);

	//movement RPCS
	UFUNCTION(Server, Reliable)
	void Server_MoveOnInput(AActor* thePawn, float mInput, float deltaTime);
	void Server_MoveOnInput_Implementation(AActor* thePawn, float mInput, float deltaTime);
	UFUNCTION(NetMulticast, Reliable)
	void MultiCast_MoveOnInput(AActor* thePawn, float mInput, float deltaTime);
	void MultiCast_MoveOnInput_Implementation(AActor* thePawn, float mInput, float deltaTime);

	
	//finding actors
	UPROPERTY(EdiTAnywhere, Category = "MyStuff")
	TArray<AActor*> FoundActors;
	UPROPERTY(EdiTAnywhere, Category = "MyStuff")
	AActor* found_bluePlatform;
	AActor* found_redPlatform;
	AActor* FindActorByTag(TArray<AActor*>& FoundActors, const FName& tag);
	void FindPlatforms();

	//components
	UCameraComponent* CameraComponent;

	

	
	
};
