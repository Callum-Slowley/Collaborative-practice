// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRCollabProject/SceneChangeTriggerReciever.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneChangeTriggerReciever() {}
// Cross Module References
	VRCOLLABPROJECT_API UClass* Z_Construct_UClass_ASceneChangeTriggerReciever_NoRegister();
	VRCOLLABPROJECT_API UClass* Z_Construct_UClass_ASceneChangeTriggerReciever();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VRCollabProject();
// End Cross Module References
	void ASceneChangeTriggerReciever::StaticRegisterNativesASceneChangeTriggerReciever()
	{
	}
	UClass* Z_Construct_UClass_ASceneChangeTriggerReciever_NoRegister()
	{
		return ASceneChangeTriggerReciever::StaticClass();
	}
	struct Z_Construct_UClass_ASceneChangeTriggerReciever_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requiredTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_requiredTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetLevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_targetLevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VRCollabProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SceneChangeTriggerReciever.h" },
		{ "ModuleRelativePath", "SceneChangeTriggerReciever.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::NewProp_requiredTime_MetaData[] = {
		{ "Category", "SceneChangeTriggerReciever" },
		{ "ModuleRelativePath", "SceneChangeTriggerReciever.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::NewProp_requiredTime = { "requiredTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASceneChangeTriggerReciever, requiredTime), METADATA_PARAMS(Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::NewProp_requiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::NewProp_requiredTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::NewProp_targetLevelName_MetaData[] = {
		{ "Category", "SceneChangeTriggerReciever" },
		{ "ModuleRelativePath", "SceneChangeTriggerReciever.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::NewProp_targetLevelName = { "targetLevelName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASceneChangeTriggerReciever, targetLevelName), METADATA_PARAMS(Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::NewProp_targetLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::NewProp_targetLevelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::NewProp_requiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::NewProp_targetLevelName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASceneChangeTriggerReciever>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::ClassParams = {
		&ASceneChangeTriggerReciever::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASceneChangeTriggerReciever()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASceneChangeTriggerReciever_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASceneChangeTriggerReciever, 3272792311);
	template<> VRCOLLABPROJECT_API UClass* StaticClass<ASceneChangeTriggerReciever>()
	{
		return ASceneChangeTriggerReciever::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASceneChangeTriggerReciever(Z_Construct_UClass_ASceneChangeTriggerReciever, &ASceneChangeTriggerReciever::StaticClass, TEXT("/Script/VRCollabProject"), TEXT("ASceneChangeTriggerReciever"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneChangeTriggerReciever);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
