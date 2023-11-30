// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "Net/UnrealNetwork.h"
#include "Player_Platform.generated.h"

UCLASS()
class TESTTASK_FAROMSTUDIO_API APlayer_Platform : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayer_Platform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, Category = "MyStuff")
	bool alreadyPosessed;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	//collision_public
	FVector wallNormal;
	bool isHittingWall;
	bool otherActorIsBall;

	//scoring
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "cpp_Points")
	int points;

	//game ended
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bothPlayersWantToRematch;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool thisPlayerWantsToRematch;

	UFUNCTION(Server, Unreliable, BlueprintCallable)
	void cpp_Server_SetThisPlayerWantsToRematch(bool playerWantsToRematch);
	void cpp_Server_SetThisPlayerWantsToRematch_Implementation(bool playerWantsToRematch);

	UFUNCTION(NetMulticast, Unreliable, BlueprintCallable)
	void cpp_Multicast_SetThisPlayerWantsToRematch(bool playerWantsToRematch);
	void cpp_Multicast_SetThisPlayerWantsToRematch_Implementation(bool playerWantsToRematch);

private:

	//components
	UPROPERTY(EditAnywhere, Category = "MyStuff")
	UStaticMeshComponent* playerPlatformMesh;
	UPROPERTY(EdiTAnywhere, Category = "MyStuff")
	UBoxComponent* boxCollider;
	UPROPERTY(EdiTAnywhere, Category = "MyStuff")
	UCameraComponent* camera;

	
	//replication
	UPROPERTY(ReplicatedUsing = OnRep_HidePlatform)
	bool platformHidden;
	UFUNCTION()
	void OnRep_HidePlatform();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//collision_private
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
