// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestTask_FaromStudio/Player_Platform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Platform() {}
// Cross Module References
	TESTTASK_FAROMSTUDIO_API UClass* Z_Construct_UClass_APlayer_Platform_NoRegister();
	TESTTASK_FAROMSTUDIO_API UClass* Z_Construct_UClass_APlayer_Platform();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TestTask_FaromStudio();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayer_Platform::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer_Platform::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer_Platform::execOnRep_HidePlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HidePlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer_Platform::execcpp_Multicast_SetThisPlayerWantsToRematch)
	{
		P_GET_UBOOL(Z_Param_playerWantsToRematch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->cpp_Multicast_SetThisPlayerWantsToRematch_Implementation(Z_Param_playerWantsToRematch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer_Platform::execcpp_Server_SetThisPlayerWantsToRematch)
	{
		P_GET_UBOOL(Z_Param_playerWantsToRematch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->cpp_Server_SetThisPlayerWantsToRematch_Implementation(Z_Param_playerWantsToRematch);
		P_NATIVE_END;
	}
	static FName NAME_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch = FName(TEXT("cpp_Multicast_SetThisPlayerWantsToRematch"));
	void APlayer_Platform::cpp_Multicast_SetThisPlayerWantsToRematch(bool playerWantsToRematch)
	{
		Player_Platform_eventcpp_Multicast_SetThisPlayerWantsToRematch_Parms Parms;
		Parms.playerWantsToRematch=playerWantsToRematch ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch),&Parms);
	}
	static FName NAME_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch = FName(TEXT("cpp_Server_SetThisPlayerWantsToRematch"));
	void APlayer_Platform::cpp_Server_SetThisPlayerWantsToRematch(bool playerWantsToRematch)
	{
		Player_Platform_eventcpp_Server_SetThisPlayerWantsToRematch_Parms Parms;
		Parms.playerWantsToRematch=playerWantsToRematch ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch),&Parms);
	}
	void APlayer_Platform::StaticRegisterNativesAPlayer_Platform()
	{
		UClass* Class = APlayer_Platform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "cpp_Multicast_SetThisPlayerWantsToRematch", &APlayer_Platform::execcpp_Multicast_SetThisPlayerWantsToRematch },
			{ "cpp_Server_SetThisPlayerWantsToRematch", &APlayer_Platform::execcpp_Server_SetThisPlayerWantsToRematch },
			{ "OnOverlapBegin", &APlayer_Platform::execOnOverlapBegin },
			{ "OnOverlapEnd", &APlayer_Platform::execOnOverlapEnd },
			{ "OnRep_HidePlatform", &APlayer_Platform::execOnRep_HidePlatform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch_Statics
	{
		static void NewProp_playerWantsToRematch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playerWantsToRematch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch_Statics::NewProp_playerWantsToRematch_SetBit(void* Obj)
	{
		((Player_Platform_eventcpp_Multicast_SetThisPlayerWantsToRematch_Parms*)Obj)->playerWantsToRematch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch_Statics::NewProp_playerWantsToRematch = { "playerWantsToRematch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_Platform_eventcpp_Multicast_SetThisPlayerWantsToRematch_Parms), &Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch_Statics::NewProp_playerWantsToRematch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch_Statics::NewProp_playerWantsToRematch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Platform, nullptr, "cpp_Multicast_SetThisPlayerWantsToRematch", nullptr, nullptr, sizeof(Player_Platform_eventcpp_Multicast_SetThisPlayerWantsToRematch_Parms), Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch_Statics
	{
		static void NewProp_playerWantsToRematch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playerWantsToRematch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch_Statics::NewProp_playerWantsToRematch_SetBit(void* Obj)
	{
		((Player_Platform_eventcpp_Server_SetThisPlayerWantsToRematch_Parms*)Obj)->playerWantsToRematch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch_Statics::NewProp_playerWantsToRematch = { "playerWantsToRematch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_Platform_eventcpp_Server_SetThisPlayerWantsToRematch_Parms), &Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch_Statics::NewProp_playerWantsToRematch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch_Statics::NewProp_playerWantsToRematch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Platform, nullptr, "cpp_Server_SetThisPlayerWantsToRematch", nullptr, nullptr, sizeof(Player_Platform_eventcpp_Server_SetThisPlayerWantsToRematch_Parms), Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics
	{
		struct Player_Platform_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_Platform_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_Platform_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_Platform_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_Platform_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Player_Platform_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_Platform_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_Platform_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//collision_private\n" },
		{ "ModuleRelativePath", "Player_Platform.h" },
		{ "ToolTip", "collision_private" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Platform, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Player_Platform_eventOnOverlapBegin_Parms), Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics
	{
		struct Player_Platform_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_Platform_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_Platform_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_Platform_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_Platform_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Platform, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(Player_Platform_eventOnOverlapEnd_Parms), Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_Platform_OnRep_HidePlatform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Platform_OnRep_HidePlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Platform_OnRep_HidePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Platform, nullptr, "OnRep_HidePlatform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Platform_OnRep_HidePlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_Platform_OnRep_HidePlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Platform_OnRep_HidePlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Platform_OnRep_HidePlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayer_Platform_NoRegister()
	{
		return APlayer_Platform::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_Platform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_alreadyPosessed_MetaData[];
#endif
		static void NewProp_alreadyPosessed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_alreadyPosessed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_points_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bothPlayersWantToRematch_MetaData[];
#endif
		static void NewProp_bothPlayersWantToRematch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bothPlayersWantToRematch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_thisPlayerWantsToRematch_MetaData[];
#endif
		static void NewProp_thisPlayerWantsToRematch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_thisPlayerWantsToRematch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerPlatformMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerPlatformMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_platformHidden_MetaData[];
#endif
		static void NewProp_platformHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_platformHidden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_Platform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TestTask_FaromStudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayer_Platform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayer_Platform_cpp_Multicast_SetThisPlayerWantsToRematch, "cpp_Multicast_SetThisPlayerWantsToRematch" }, // 1380310077
		{ &Z_Construct_UFunction_APlayer_Platform_cpp_Server_SetThisPlayerWantsToRematch, "cpp_Server_SetThisPlayerWantsToRematch" }, // 4058848342
		{ &Z_Construct_UFunction_APlayer_Platform_OnOverlapBegin, "OnOverlapBegin" }, // 2735396761
		{ &Z_Construct_UFunction_APlayer_Platform_OnOverlapEnd, "OnOverlapEnd" }, // 3345251888
		{ &Z_Construct_UFunction_APlayer_Platform_OnRep_HidePlatform, "OnRep_HidePlatform" }, // 360144087
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Platform_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player_Platform.h" },
		{ "ModuleRelativePath", "Player_Platform.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Platform_Statics::NewProp_alreadyPosessed_MetaData[] = {
		{ "Category", "MyStuff" },
		{ "ModuleRelativePath", "Player_Platform.h" },
	};
#endif
	void Z_Construct_UClass_APlayer_Platform_Statics::NewProp_alreadyPosessed_SetBit(void* Obj)
	{
		((APlayer_Platform*)Obj)->alreadyPosessed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer_Platform_Statics::NewProp_alreadyPosessed = { "alreadyPosessed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayer_Platform), &Z_Construct_UClass_APlayer_Platform_Statics::NewProp_alreadyPosessed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_alreadyPosessed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_alreadyPosessed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Platform_Statics::NewProp_points_MetaData[] = {
		{ "Category", "cpp_Points" },
		{ "Comment", "//scoring\n" },
		{ "ModuleRelativePath", "Player_Platform.h" },
		{ "ToolTip", "scoring" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayer_Platform_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_Platform, points), METADATA_PARAMS(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_points_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Platform_Statics::NewProp_bothPlayersWantToRematch_MetaData[] = {
		{ "Category", "Player_Platform" },
		{ "Comment", "//game ended\n" },
		{ "ModuleRelativePath", "Player_Platform.h" },
		{ "ToolTip", "game ended" },
	};
#endif
	void Z_Construct_UClass_APlayer_Platform_Statics::NewProp_bothPlayersWantToRematch_SetBit(void* Obj)
	{
		((APlayer_Platform*)Obj)->bothPlayersWantToRematch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer_Platform_Statics::NewProp_bothPlayersWantToRematch = { "bothPlayersWantToRematch", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayer_Platform), &Z_Construct_UClass_APlayer_Platform_Statics::NewProp_bothPlayersWantToRematch_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_bothPlayersWantToRematch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_bothPlayersWantToRematch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Platform_Statics::NewProp_thisPlayerWantsToRematch_MetaData[] = {
		{ "Category", "Player_Platform" },
		{ "ModuleRelativePath", "Player_Platform.h" },
	};
#endif
	void Z_Construct_UClass_APlayer_Platform_Statics::NewProp_thisPlayerWantsToRematch_SetBit(void* Obj)
	{
		((APlayer_Platform*)Obj)->thisPlayerWantsToRematch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer_Platform_Statics::NewProp_thisPlayerWantsToRematch = { "thisPlayerWantsToRematch", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayer_Platform), &Z_Construct_UClass_APlayer_Platform_Statics::NewProp_thisPlayerWantsToRematch_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_thisPlayerWantsToRematch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_thisPlayerWantsToRematch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Platform_Statics::NewProp_playerPlatformMesh_MetaData[] = {
		{ "Category", "MyStuff" },
		{ "Comment", "//components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player_Platform.h" },
		{ "ToolTip", "components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_Platform_Statics::NewProp_playerPlatformMesh = { "playerPlatformMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_Platform, playerPlatformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_playerPlatformMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_playerPlatformMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Platform_Statics::NewProp_boxCollider_MetaData[] = {
		{ "Category", "MyStuff" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_Platform_Statics::NewProp_boxCollider = { "boxCollider", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_Platform, boxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_boxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_boxCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Platform_Statics::NewProp_camera_MetaData[] = {
		{ "Category", "MyStuff" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_Platform_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_Platform, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Platform_Statics::NewProp_platformHidden_MetaData[] = {
		{ "Comment", "//replication\n" },
		{ "ModuleRelativePath", "Player_Platform.h" },
		{ "ToolTip", "replication" },
	};
#endif
	void Z_Construct_UClass_APlayer_Platform_Statics::NewProp_platformHidden_SetBit(void* Obj)
	{
		((APlayer_Platform*)Obj)->platformHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer_Platform_Statics::NewProp_platformHidden = { "platformHidden", "OnRep_HidePlatform", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayer_Platform), &Z_Construct_UClass_APlayer_Platform_Statics::NewProp_platformHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_platformHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Platform_Statics::NewProp_platformHidden_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer_Platform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Platform_Statics::NewProp_alreadyPosessed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Platform_Statics::NewProp_points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Platform_Statics::NewProp_bothPlayersWantToRematch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Platform_Statics::NewProp_thisPlayerWantsToRematch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Platform_Statics::NewProp_playerPlatformMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Platform_Statics::NewProp_boxCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Platform_Statics::NewProp_camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Platform_Statics::NewProp_platformHidden,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_Platform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Platform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Platform_Statics::ClassParams = {
		&APlayer_Platform::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayer_Platform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Platform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_Platform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Platform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_Platform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_Platform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_Platform, 3528908360);
	template<> TESTTASK_FAROMSTUDIO_API UClass* StaticClass<APlayer_Platform>()
	{
		return APlayer_Platform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Platform(Z_Construct_UClass_APlayer_Platform, &APlayer_Platform::StaticClass, TEXT("/Script/TestTask_FaromStudio"), TEXT("APlayer_Platform"), false, nullptr, nullptr, nullptr);

	void APlayer_Platform::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_points(TEXT("points"));
		static const FName Name_bothPlayersWantToRematch(TEXT("bothPlayersWantToRematch"));
		static const FName Name_thisPlayerWantsToRematch(TEXT("thisPlayerWantsToRematch"));
		static const FName Name_platformHidden(TEXT("platformHidden"));

		const bool bIsValid = true
			&& Name_points == ClassReps[(int32)ENetFields_Private::points].Property->GetFName()
			&& Name_bothPlayersWantToRematch == ClassReps[(int32)ENetFields_Private::bothPlayersWantToRematch].Property->GetFName()
			&& Name_thisPlayerWantsToRematch == ClassReps[(int32)ENetFields_Private::thisPlayerWantsToRematch].Property->GetFName()
			&& Name_platformHidden == ClassReps[(int32)ENetFields_Private::platformHidden].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayer_Platform"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Platform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
