// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "MyGameModeBase.h"
//#include "Net/UnrealNetwork.h"
#include "Ball.generated.h"

UCLASS()
class TESTTASK_FAROMSTUDIO_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

private:

	//gamemode
	AMyGameModeBase* gamemode;

	//network
	ENetRole role;

	//components
	UPROPERTY(EdiTAnywhere, Category = "MyStuff")
	USphereComponent* sphereCollider;
	UPROPERTY(EditAnywhere, Category = "MyStuff")
	UStaticMeshComponent* ballMesh;
	
	AActor* foundBall;
	void FindBall();
	TArray<AActor*> FoundActors;
	AActor* FindActorByTag(TArray<AActor*>& FoundActors, const FName& tag);

	//movement
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	UPROPERTY(Replicated)
	FVector movementDirection;
	UPROPERTY(Replicated)
	FVector storedDirection;
	UPROPERTY(Replicated)
	FVector newLocation;
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void MoveRandomly(float deltaTime);
	UPROPERTY(VisibleAnywhere, Category = "MyStuff")
	bool isOverlapping;
	
	UFUNCTION(Client,Reliable)
	void Client_MoveRandomly(float deltaTime);
	void Client_MoveRandomly_Implementation(float deltaTime);
	
	UFUNCTION(NetMulticast,Reliable)
	void Multicast_MoveRandomly(float deltaTime);
	void Multicast_MoveRandomly_Implementation(float deltaTime);

	UFUNCTION(Server, Reliable)
	void Server_MoveRandomly(float deltaTime);
	void Server_MoveRandomly_Implementation(float deltaTime);
	
	void SetRandomDirection(FVector& movementDirectionVector);
	bool SpeedUpNextCollision;
	int speed;
	int speedLimit;

	float updFREQ;

	bool PlatformWasHitInFront(AActor* OtherActor, const FVector& hitResultsNormalVector);

	FVector firstOverlapVector;
	

	//scoring
	FVector startLocation;
	AActor* host_platform;
	AActor* client_platform;
	void FindPlatforms();
	void CheckForGameOver();

	
	void ResetBall();

	UFUNCTION(BlueprintCallable)
	void cpp_RestartGame();
};
