// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRCollabProject/PickupInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupInterface() {}
// Cross Module References
	VRCOLLABPROJECT_API UClass* Z_Construct_UClass_UPickupInterface_NoRegister();
	VRCOLLABPROJECT_API UClass* Z_Construct_UClass_UPickupInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VRCollabProject();
// End Cross Module References
	void UPickupInterface::StaticRegisterNativesUPickupInterface()
	{
	}
	UClass* Z_Construct_UClass_UPickupInterface_NoRegister()
	{
		return UPickupInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPickupInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickupInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VRCollabProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickupInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickupInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPickupInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPickupInterface_Statics::ClassParams = {
		&UPickupInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPickupInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPickupInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPickupInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPickupInterface, 3957860500);
	template<> VRCOLLABPROJECT_API UClass* StaticClass<UPickupInterface>()
	{
		return UPickupInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPickupInterface(Z_Construct_UClass_UPickupInterface, &UPickupInterface::StaticClass, TEXT("/Script/VRCollabProject"), TEXT("UPickupInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
