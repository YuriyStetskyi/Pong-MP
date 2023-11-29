// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestTask_FaromStudio/TestTask_FaromStudioGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestTask_FaromStudioGameModeBase() {}
// Cross Module References
	TESTTASK_FAROMSTUDIO_API UClass* Z_Construct_UClass_ATestTask_FaromStudioGameModeBase_NoRegister();
	TESTTASK_FAROMSTUDIO_API UClass* Z_Construct_UClass_ATestTask_FaromStudioGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestTask_FaromStudio();
// End Cross Module References
	void ATestTask_FaromStudioGameModeBase::StaticRegisterNativesATestTask_FaromStudioGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATestTask_FaromStudioGameModeBase_NoRegister()
	{
		return ATestTask_FaromStudioGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATestTask_FaromStudioGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestTask_FaromStudioGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestTask_FaromStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTask_FaromStudioGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TestTask_FaromStudioGameModeBase.h" },
		{ "ModuleRelativePath", "TestTask_FaromStudioGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestTask_FaromStudioGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestTask_FaromStudioGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestTask_FaromStudioGameModeBase_Statics::ClassParams = {
		&ATestTask_FaromStudioGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestTask_FaromStudioGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestTask_FaromStudioGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestTask_FaromStudioGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestTask_FaromStudioGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestTask_FaromStudioGameModeBase, 2648145308);
	template<> TESTTASK_FAROMSTUDIO_API UClass* StaticClass<ATestTask_FaromStudioGameModeBase>()
	{
		return ATestTask_FaromStudioGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestTask_FaromStudioGameModeBase(Z_Construct_UClass_ATestTask_FaromStudioGameModeBase, &ATestTask_FaromStudioGameModeBase::StaticClass, TEXT("/Script/TestTask_FaromStudio"), TEXT("ATestTask_FaromStudioGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestTask_FaromStudioGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
