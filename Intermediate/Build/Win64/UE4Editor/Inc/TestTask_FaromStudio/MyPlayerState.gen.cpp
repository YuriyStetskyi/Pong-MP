// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestTask_FaromStudio/MyPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerState() {}
// Cross Module References
	TESTTASK_FAROMSTUDIO_API UClass* Z_Construct_UClass_AMyPlayerState_NoRegister();
	TESTTASK_FAROMSTUDIO_API UClass* Z_Construct_UClass_AMyPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_TestTask_FaromStudio();
// End Cross Module References
	void AMyPlayerState::StaticRegisterNativesAMyPlayerState()
	{
	}
	UClass* Z_Construct_UClass_AMyPlayerState_NoRegister()
	{
		return AMyPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_TestTask_FaromStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyPlayerState.h" },
		{ "ModuleRelativePath", "MyPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerState_Statics::NewProp_bothPlayersWantToRematch_MetaData[] = {
		{ "Category", "MyPlayerState" },
		{ "ModuleRelativePath", "MyPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_AMyPlayerState_Statics::NewProp_bothPlayersWantToRematch_SetBit(void* Obj)
	{
		((AMyPlayerState*)Obj)->bothPlayersWantToRematch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayerState_Statics::NewProp_bothPlayersWantToRematch = { "bothPlayersWantToRematch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyPlayerState), &Z_Construct_UClass_AMyPlayerState_Statics::NewProp_bothPlayersWantToRematch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerState_Statics::NewProp_bothPlayersWantToRematch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::NewProp_bothPlayersWantToRematch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerState_Statics::NewProp_thisPlayerWantsToRematch_MetaData[] = {
		{ "Category", "MyPlayerState" },
		{ "ModuleRelativePath", "MyPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_AMyPlayerState_Statics::NewProp_thisPlayerWantsToRematch_SetBit(void* Obj)
	{
		((AMyPlayerState*)Obj)->thisPlayerWantsToRematch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayerState_Statics::NewProp_thisPlayerWantsToRematch = { "thisPlayerWantsToRematch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyPlayerState), &Z_Construct_UClass_AMyPlayerState_Statics::NewProp_thisPlayerWantsToRematch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerState_Statics::NewProp_thisPlayerWantsToRematch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::NewProp_thisPlayerWantsToRematch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerState_Statics::NewProp_bothPlayersWantToRematch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerState_Statics::NewProp_thisPlayerWantsToRematch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerState_Statics::ClassParams = {
		&AMyPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayerState, 3630810081);
	template<> TESTTASK_FAROMSTUDIO_API UClass* StaticClass<AMyPlayerState>()
	{
		return AMyPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerState(Z_Construct_UClass_AMyPlayerState, &AMyPlayerState::StaticClass, TEXT("/Script/TestTask_FaromStudio"), TEXT("AMyPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
