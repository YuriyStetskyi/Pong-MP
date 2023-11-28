// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameStateBase.h"
#include <Kismet/GameplayStatics.h>
#include "MyPlayerController.h"

//AMyGameStateBase::AMyGameStateBase()
//	:hostWantsToRematch(false),
//	clientWantsToRematch(false),
//	hostController(nullptr),
//	clientController(nullptr)
//{
//	PrimaryActorTick.bCanEverTick = true;
//}
//
//void AMyGameStateBase::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//	CheckPlayersRematch();
//	TellPlayerToReplay();
//
//	if (hostController == nullptr || clientController == nullptr)
//	{
//		FindControllers();
//	}
//}
//
//void AMyGameStateBase::FindControllers()
//{
//	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), FoundActors);
//	hostController = FindActorByTag(FoundActors, "hostController");
//	clientController = FindActorByTag(FoundActors, "clientController");
//
//	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), FoundActors);
//}
//
//AActor* AMyGameStateBase::FindActorByTag(TArray<AActor*>& actors, const FName& tag)
//{
//	for (AActor* actor : actors)
//	{
//		if (actor && actor->ActorHasTag(tag))
//		{
//			return actor;
//		}
//	}
//	return nullptr;
//}
//
//void AMyGameStateBase::CheckPlayersRematch()
//{
//	if (hostController != nullptr)
//	{
//		hostWantsToRematch = ((AMyPlayerController*)hostController)->wantsToRematch;
//	}
//
//	if (clientController != nullptr)
//	{
//		clientWantsToRematch = ((AMyPlayerController*)clientController)->wantsToRematch;
//	}
//}
//
//void AMyGameStateBase::TellPlayerToReplay()
//{
//	if (hostWantsToRematch && clientWantsToRematch)
//	{
//		((AMyPlayerController*)hostController)->bothWantToRematch = true;
//		((AMyPlayerController*)clientController)->bothWantToRematch = true;
//	}
//}
