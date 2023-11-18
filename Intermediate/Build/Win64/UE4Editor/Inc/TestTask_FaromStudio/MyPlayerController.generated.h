// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TESTTASK_FAROMSTUDIO_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define TESTTASK_FAROMSTUDIO_MyPlayerController_generated_h

#define Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_SPARSE_DATA
#define Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_RPC_WRAPPERS \
	virtual void MultiCast_MoveOnInput_Implementation(AActor* thePawn, float mInput, float deltaTime); \
	virtual void Server_MoveOnInput_Implementation(AActor* thePawn, float mInput, float deltaTime); \
 \
	DECLARE_FUNCTION(execMultiCast_MoveOnInput); \
	DECLARE_FUNCTION(execServer_MoveOnInput);


#define Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMultiCast_MoveOnInput); \
	DECLARE_FUNCTION(execServer_MoveOnInput);


#define Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_EVENT_PARMS \
	struct MyPlayerController_eventMultiCast_MoveOnInput_Parms \
	{ \
		AActor* thePawn; \
		float mInput; \
		float deltaTime; \
	}; \
	struct MyPlayerController_eventServer_MoveOnInput_Parms \
	{ \
		AActor* thePawn; \
		float mInput; \
		float deltaTime; \
	};


#define Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_CALLBACK_WRAPPERS
#define Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTask_FaromStudio"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTask_FaromStudio"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public:


#define Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerController)


#define Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__movementInput() { return STRUCT_OFFSET(AMyPlayerController, movementInput); } \
	FORCEINLINE static uint32 __PPO__posessedPawn() { return STRUCT_OFFSET(AMyPlayerController, posessedPawn); } \
	FORCEINLINE static uint32 __PPO__FoundActors() { return STRUCT_OFFSET(AMyPlayerController, FoundActors); }


#define Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_15_PROLOG \
	Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_EVENT_PARMS


#define Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_SPARSE_DATA \
	Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_RPC_WRAPPERS \
	Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_CALLBACK_WRAPPERS \
	Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_INCLASS \
	Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_SPARSE_DATA \
	Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_CALLBACK_WRAPPERS \
	Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTASK_FAROMSTUDIO_API UClass* StaticClass<class AMyPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stetskyi_FaromStudioTest_Github_Source_TestTask_FaromStudio_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
