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
#ifdef TESTTASK_FAROMSTUDIO_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define TESTTASK_FAROMSTUDIO_Ball_generated_h

#define Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_SPARSE_DATA
#define Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_RPC_WRAPPERS \
	virtual void Server_MoveRandomly_Implementation(float deltaTime); \
	virtual void Multicast_MoveRandomly_Implementation(float deltaTime); \
	virtual void Client_MoveRandomly_Implementation(float deltaTime); \
 \
	DECLARE_FUNCTION(execcpp_RestartGame); \
	DECLARE_FUNCTION(execServer_MoveRandomly); \
	DECLARE_FUNCTION(execMulticast_MoveRandomly); \
	DECLARE_FUNCTION(execClient_MoveRandomly); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execcpp_RestartGame); \
	DECLARE_FUNCTION(execServer_MoveRandomly); \
	DECLARE_FUNCTION(execMulticast_MoveRandomly); \
	DECLARE_FUNCTION(execClient_MoveRandomly); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_EVENT_PARMS \
	struct Ball_eventClient_MoveRandomly_Parms \
	{ \
		float deltaTime; \
	}; \
	struct Ball_eventMulticast_MoveRandomly_Parms \
	{ \
		float deltaTime; \
	}; \
	struct Ball_eventServer_MoveRandomly_Parms \
	{ \
		float deltaTime; \
	};


#define Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_CALLBACK_WRAPPERS
#define Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTask_FaromStudio"), NO_API) \
	DECLARE_SERIALIZER(ABall) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		movementDirection=NETFIELD_REP_START, \
		newLocation, \
		NETFIELD_REP_END=newLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTask_FaromStudio"), NO_API) \
	DECLARE_SERIALIZER(ABall) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		movementDirection=NETFIELD_REP_START, \
		newLocation, \
		NETFIELD_REP_END=newLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sphereCollider() { return STRUCT_OFFSET(ABall, sphereCollider); } \
	FORCEINLINE static uint32 __PPO__ballMesh() { return STRUCT_OFFSET(ABall, ballMesh); } \
	FORCEINLINE static uint32 __PPO__movementDirection() { return STRUCT_OFFSET(ABall, movementDirection); } \
	FORCEINLINE static uint32 __PPO__newLocation() { return STRUCT_OFFSET(ABall, newLocation); } \
	FORCEINLINE static uint32 __PPO__isOverlapping() { return STRUCT_OFFSET(ABall, isOverlapping); }


#define Pong_MP_Source_TestTask_FaromStudio_Ball_h_12_PROLOG \
	Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_EVENT_PARMS


#define Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_PRIVATE_PROPERTY_OFFSET \
	Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_SPARSE_DATA \
	Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_RPC_WRAPPERS \
	Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_CALLBACK_WRAPPERS \
	Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_INCLASS \
	Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_PRIVATE_PROPERTY_OFFSET \
	Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_SPARSE_DATA \
	Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_CALLBACK_WRAPPERS \
	Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_INCLASS_NO_PURE_DECLS \
	Pong_MP_Source_TestTask_FaromStudio_Ball_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTASK_FAROMSTUDIO_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_MP_Source_TestTask_FaromStudio_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
