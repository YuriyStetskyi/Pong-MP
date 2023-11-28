// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestTask_FaromStudio/MyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeBase() {}
// Cross Module References
	TESTTASK_FAROMSTUDIO_API UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister();
	TESTTASK_FAROMSTUDIO_API UClass* Z_Construct_UClass_AMyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestTask_FaromStudio();
// End Cross Module References
	void AMyGameModeBase::StaticRegisterNativesAMyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister()
	{
		return AMyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hostWantsToRematch_MetaData[];
#endif
		static void NewProp_hostWantsToRematch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hostWantsToRematch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clientWantsToRematch_MetaData[];
#endif
		static void NewProp_clientWantsToRematch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_clientWantsToRematch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestTask_FaromStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyGameModeBase.h" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_hostWantsToRematch_MetaData[] = {
		{ "Category", "MyGameModeBase" },
		{ "Comment", "//checking if players want to rematch\n" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
		{ "ToolTip", "checking if players want to rematch" },
	};
#endif
	void Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_hostWantsToRematch_SetBit(void* Obj)
	{
		((AMyGameModeBase*)Obj)->hostWantsToRematch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_hostWantsToRematch = { "hostWantsToRematch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyGameModeBase), &Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_hostWantsToRematch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_hostWantsToRematch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_hostWantsToRematch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_clientWantsToRematch_MetaData[] = {
		{ "Category", "MyGameModeBase" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_clientWantsToRematch_SetBit(void* Obj)
	{
		((AMyGameModeBase*)Obj)->clientWantsToRematch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_clientWantsToRematch = { "clientWantsToRematch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyGameModeBase), &Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_clientWantsToRematch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_clientWantsToRematch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_clientWantsToRematch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_hostWantsToRematch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_clientWantsToRematch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams = {
		&AMyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameModeBase, 1170199295);
	template<> TESTTASK_FAROMSTUDIO_API UClass* StaticClass<AMyGameModeBase>()
	{
		return AMyGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameModeBase(Z_Construct_UClass_AMyGameModeBase, &AMyGameModeBase::StaticClass, TEXT("/Script/TestTask_FaromStudio"), TEXT("AMyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
