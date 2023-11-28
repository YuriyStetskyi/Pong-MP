// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TESTTASK_FAROMSTUDIO_Player_Platform_generated_h
#error "Player_Platform.generated.h already included, missing '#pragma once' in Player_Platform.h"
#endif
#define TESTTASK_FAROMSTUDIO_Player_Platform_generated_h

#define Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_SPARSE_DATA
#define Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_RPC_WRAPPERS \
	virtual void cpp_Multicast_SetThisPlayerWantsToRematch_Implementation(bool playerWantsToRematch); \
	virtual void cpp_Server_SetThisPlayerWantsToRematch_Implementation(bool playerWantsToRematch); \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnRep_HidePlatform); \
	DECLARE_FUNCTION(execcpp_Multicast_SetThisPlayerWantsToRematch); \
	DECLARE_FUNCTION(execcpp_Server_SetThisPlayerWantsToRematch);


#define Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnRep_HidePlatform); \
	DECLARE_FUNCTION(execcpp_Multicast_SetThisPlayerWantsToRematch); \
	DECLARE_FUNCTION(execcpp_Server_SetThisPlayerWantsToRematch);


#define Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_EVENT_PARMS \
	struct Player_Platform_eventcpp_Multicast_SetThisPlayerWantsToRematch_Parms \
	{ \
		bool playerWantsToRematch; \
	}; \
	struct Player_Platform_eventcpp_Server_SetThisPlayerWantsToRematch_Parms \
	{ \
		bool playerWantsToRematch; \
	};


#define Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_CALLBACK_WRAPPERS
#define Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_Platform(); \
	friend struct Z_Construct_UClass_APlayer_Platform_Statics; \
public: \
	DECLARE_CLASS(APlayer_Platform, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTask_FaromStudio"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Platform) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		points=NETFIELD_REP_START, \
		bothPlayersWantToRematch, \
		thisPlayerWantsToRematch, \
		platformHidden, \
		NETFIELD_REP_END=platformHidden	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_Platform(); \
	friend struct Z_Construct_UClass_APlayer_Platform_Statics; \
public: \
	DECLARE_CLASS(APlayer_Platform, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTask_FaromStudio"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Platform) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		points=NETFIELD_REP_START, \
		bothPlayersWantToRematch, \
		thisPlayerWantsToRematch, \
		platformHidden, \
		NETFIELD_REP_END=platformHidden	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer_Platform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_Platform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Platform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Platform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Platform(APlayer_Platform&&); \
	NO_API APlayer_Platform(const APlayer_Platform&); \
public:


#define Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Platform(APlayer_Platform&&); \
	NO_API APlayer_Platform(const APlayer_Platform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Platform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Platform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_Platform)


#define Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__playerPlatformMesh() { return STRUCT_OFFSET(APlayer_Platform, playerPlatformMesh); } \
	FORCEINLINE static uint32 __PPO__boxCollider() { return STRUCT_OFFSET(APlayer_Platform, boxCollider); } \
	FORCEINLINE static uint32 __PPO__camera() { return STRUCT_OFFSET(APlayer_Platform, camera); } \
	FORCEINLINE static uint32 __PPO__platformHidden() { return STRUCT_OFFSET(APlayer_Platform, platformHidden); }


#define Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_12_PROLOG \
	Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_EVENT_PARMS


#define Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_PRIVATE_PROPERTY_OFFSET \
	Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_SPARSE_DATA \
	Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_RPC_WRAPPERS \
	Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_CALLBACK_WRAPPERS \
	Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_INCLASS \
	Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_PRIVATE_PROPERTY_OFFSET \
	Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_SPARSE_DATA \
	Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_CALLBACK_WRAPPERS \
	Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_INCLASS_NO_PURE_DECLS \
	Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTASK_FAROMSTUDIO_API UClass* StaticClass<class APlayer_Platform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_MP_Source_TestTask_FaromStudio_Player_Platform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
