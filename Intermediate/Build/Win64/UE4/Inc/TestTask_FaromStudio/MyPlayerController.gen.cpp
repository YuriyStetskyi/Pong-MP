// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestTask_FaromStudio/MyPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerController() {}
// Cross Module References
	TESTTASK_FAROMSTUDIO_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
	TESTTASK_FAROMSTUDIO_API UClass* Z_Construct_UClass_AMyPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TestTask_FaromStudio();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyPlayerController::execMultiCast_MoveOnInput)
	{
		P_GET_OBJECT(AActor,Z_Param_thePawn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultiCast_MoveOnInput_Implementation(Z_Param_thePawn,Z_Param_mInput,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerController::execServer_MoveOnInput)
	{
		P_GET_OBJECT(AActor,Z_Param_thePawn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_MoveOnInput_Implementation(Z_Param_thePawn,Z_Param_mInput,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerController::execServer_SetWantsToRematch)
	{
		P_GET_UBOOL(Z_Param_wantsRematch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetWantsToRematch_Implementation(Z_Param_wantsRematch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerController::execMulticast_SetWantsToRematch)
	{
		P_GET_UBOOL(Z_Param_wantsRematch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetWantsToRematch_Implementation(Z_Param_wantsRematch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerController::execcpp_SetWantsToRematch)
	{
		P_GET_UBOOL(Z_Param_wantsRematch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->cpp_SetWantsToRematch(Z_Param_wantsRematch);
		P_NATIVE_END;
	}
	static FName NAME_AMyPlayerController_MultiCast_MoveOnInput = FName(TEXT("MultiCast_MoveOnInput"));
	void AMyPlayerController::MultiCast_MoveOnInput(AActor* thePawn, float mInput, float deltaTime)
	{
		MyPlayerController_eventMultiCast_MoveOnInput_Parms Parms;
		Parms.thePawn=thePawn;
		Parms.mInput=mInput;
		Parms.deltaTime=deltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayerController_MultiCast_MoveOnInput),&Parms);
	}
	static FName NAME_AMyPlayerController_Multicast_SetWantsToRematch = FName(TEXT("Multicast_SetWantsToRematch"));
	void AMyPlayerController::Multicast_SetWantsToRematch(bool wantsRematch)
	{
		MyPlayerController_eventMulticast_SetWantsToRematch_Parms Parms;
		Parms.wantsRematch=wantsRematch ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayerController_Multicast_SetWantsToRematch),&Parms);
	}
	static FName NAME_AMyPlayerController_Server_MoveOnInput = FName(TEXT("Server_MoveOnInput"));
	void AMyPlayerController::Server_MoveOnInput(AActor* thePawn, float mInput, float deltaTime)
	{
		MyPlayerController_eventServer_MoveOnInput_Parms Parms;
		Parms.thePawn=thePawn;
		Parms.mInput=mInput;
		Parms.deltaTime=deltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayerController_Server_MoveOnInput),&Parms);
	}
	static FName NAME_AMyPlayerController_Server_SetWantsToRematch = FName(TEXT("Server_SetWantsToRematch"));
	void AMyPlayerController::Server_SetWantsToRematch(bool wantsRematch)
	{
		MyPlayerController_eventServer_SetWantsToRematch_Parms Parms;
		Parms.wantsRematch=wantsRematch ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayerController_Server_SetWantsToRematch),&Parms);
	}
	void AMyPlayerController::StaticRegisterNativesAMyPlayerController()
	{
		UClass* Class = AMyPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "cpp_SetWantsToRematch", &AMyPlayerController::execcpp_SetWantsToRematch },
			{ "MultiCast_MoveOnInput", &AMyPlayerController::execMultiCast_MoveOnInput },
			{ "Multicast_SetWantsToRematch", &AMyPlayerController::execMulticast_SetWantsToRematch },
			{ "Server_MoveOnInput", &AMyPlayerController::execServer_MoveOnInput },
			{ "Server_SetWantsToRematch", &AMyPlayerController::execServer_SetWantsToRematch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch_Statics
	{
		struct MyPlayerController_eventcpp_SetWantsToRematch_Parms
		{
			bool wantsRematch;
		};
		static void NewProp_wantsRematch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wantsRematch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch_Statics::NewProp_wantsRematch_SetBit(void* Obj)
	{
		((MyPlayerController_eventcpp_SetWantsToRematch_Parms*)Obj)->wantsRematch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch_Statics::NewProp_wantsRematch = { "wantsRematch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyPlayerController_eventcpp_SetWantsToRematch_Parms), &Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch_Statics::NewProp_wantsRematch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch_Statics::NewProp_wantsRematch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "cpp_SetWantsToRematch", nullptr, nullptr, sizeof(MyPlayerController_eventcpp_SetWantsToRematch_Parms), Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thePawn;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::NewProp_thePawn = { "thePawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerController_eventMultiCast_MoveOnInput_Parms, thePawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::NewProp_mInput = { "mInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerController_eventMultiCast_MoveOnInput_Parms, mInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerController_eventMultiCast_MoveOnInput_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::NewProp_thePawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::NewProp_mInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "MultiCast_MoveOnInput", nullptr, nullptr, sizeof(MyPlayerController_eventMultiCast_MoveOnInput_Parms), Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch_Statics
	{
		static void NewProp_wantsRematch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wantsRematch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch_Statics::NewProp_wantsRematch_SetBit(void* Obj)
	{
		((MyPlayerController_eventMulticast_SetWantsToRematch_Parms*)Obj)->wantsRematch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch_Statics::NewProp_wantsRematch = { "wantsRematch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyPlayerController_eventMulticast_SetWantsToRematch_Parms), &Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch_Statics::NewProp_wantsRematch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch_Statics::NewProp_wantsRematch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "Multicast_SetWantsToRematch", nullptr, nullptr, sizeof(MyPlayerController_eventMulticast_SetWantsToRematch_Parms), Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thePawn;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::NewProp_thePawn = { "thePawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerController_eventServer_MoveOnInput_Parms, thePawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::NewProp_mInput = { "mInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerController_eventServer_MoveOnInput_Parms, mInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerController_eventServer_MoveOnInput_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::NewProp_thePawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::NewProp_mInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//RPC's\n" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
		{ "ToolTip", "RPC's" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "Server_MoveOnInput", nullptr, nullptr, sizeof(MyPlayerController_eventServer_MoveOnInput_Parms), Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch_Statics
	{
		static void NewProp_wantsRematch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wantsRematch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch_Statics::NewProp_wantsRematch_SetBit(void* Obj)
	{
		((MyPlayerController_eventServer_SetWantsToRematch_Parms*)Obj)->wantsRematch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch_Statics::NewProp_wantsRematch = { "wantsRematch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyPlayerController_eventServer_SetWantsToRematch_Parms), &Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch_Statics::NewProp_wantsRematch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch_Statics::NewProp_wantsRematch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "Server_SetWantsToRematch", nullptr, nullptr, sizeof(MyPlayerController_eventServer_SetWantsToRematch_Parms), Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyPlayerController_NoRegister()
	{
		return AMyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_points_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wantsToRematch_MetaData[];
#endif
		static void NewProp_wantsToRematch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wantsToRematch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bothWantToRematch_MetaData[];
#endif
		static void NewProp_bothWantToRematch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bothWantToRematch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_posessedPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_posessedPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoundActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoundActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoundActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TestTask_FaromStudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayerController_cpp_SetWantsToRematch, "cpp_SetWantsToRematch" }, // 3455959170
		{ &Z_Construct_UFunction_AMyPlayerController_MultiCast_MoveOnInput, "MultiCast_MoveOnInput" }, // 797059189
		{ &Z_Construct_UFunction_AMyPlayerController_Multicast_SetWantsToRematch, "Multicast_SetWantsToRematch" }, // 1924276191
		{ &Z_Construct_UFunction_AMyPlayerController_Server_MoveOnInput, "Server_MoveOnInput" }, // 2302138270
		{ &Z_Construct_UFunction_AMyPlayerController_Server_SetWantsToRematch, "Server_SetWantsToRematch" }, // 3966500465
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyPlayerController.h" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_points_MetaData[] = {
		{ "Category", "MyStuff" },
		{ "Comment", "//scoring system\n" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
		{ "ToolTip", "scoring system" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, points), METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_points_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_wantsToRematch_MetaData[] = {
		{ "Category", "MyPlayerController" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AMyPlayerController_Statics::NewProp_wantsToRematch_SetBit(void* Obj)
	{
		((AMyPlayerController*)Obj)->wantsToRematch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_wantsToRematch = { "wantsToRematch", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyPlayerController), &Z_Construct_UClass_AMyPlayerController_Statics::NewProp_wantsToRematch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_wantsToRematch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_wantsToRematch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_bothWantToRematch_MetaData[] = {
		{ "Category", "MyPlayerController" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AMyPlayerController_Statics::NewProp_bothWantToRematch_SetBit(void* Obj)
	{
		((AMyPlayerController*)Obj)->bothWantToRematch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_bothWantToRematch = { "bothWantToRematch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyPlayerController), &Z_Construct_UClass_AMyPlayerController_Statics::NewProp_bothWantToRematch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_bothWantToRematch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_bothWantToRematch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_movementInput_MetaData[] = {
		{ "Category", "MyStuff" },
		{ "Comment", "//movement\n" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
		{ "ToolTip", "movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_movementInput = { "movementInput", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, movementInput), METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_movementInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_movementInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_posessedPawn_MetaData[] = {
		{ "Category", "MyStuff" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_posessedPawn = { "posessedPawn", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, posessedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_posessedPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_posessedPawn_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_FoundActors_Inner = { "FoundActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_FoundActors_MetaData[] = {
		{ "Category", "MyStuff" },
		{ "Comment", "//finding actors\n" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
		{ "ToolTip", "finding actors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_FoundActors = { "FoundActors", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayerController, FoundActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_FoundActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_FoundActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_wantsToRematch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_bothWantToRematch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_movementInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_posessedPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_FoundActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_FoundActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerController_Statics::ClassParams = {
		&AMyPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayerController, 3308501976);
	template<> TESTTASK_FAROMSTUDIO_API UClass* StaticClass<AMyPlayerController>()
	{
		return AMyPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerController(Z_Construct_UClass_AMyPlayerController, &AMyPlayerController::StaticClass, TEXT("/Script/TestTask_FaromStudio"), TEXT("AMyPlayerController"), false, nullptr, nullptr, nullptr);

	void AMyPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_wantsToRematch(TEXT("wantsToRematch"));

		const bool bIsValid = true
			&& Name_wantsToRematch == ClassReps[(int32)ENetFields_Private::wantsToRematch].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMyPlayerController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
