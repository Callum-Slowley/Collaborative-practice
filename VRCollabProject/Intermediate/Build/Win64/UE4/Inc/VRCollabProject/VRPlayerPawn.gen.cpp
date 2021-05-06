// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRCollabProject/VRPlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPlayerPawn() {}
// Cross Module References
	VRCOLLABPROJECT_API UClass* Z_Construct_UClass_AVRPlayerPawn_NoRegister();
	VRCOLLABPROJECT_API UClass* Z_Construct_UClass_AVRPlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VRCollabProject();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AVRPlayerPawn::StaticRegisterNativesAVRPlayerPawn()
	{
	}
	UClass* Z_Construct_UClass_AVRPlayerPawn_NoRegister()
	{
		return AVRPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AVRPlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_capsuleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VROffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VROffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightMotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightMotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftMotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftMotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightGrabSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightGrabSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftGrabSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftGrabSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playerMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDebugInfo_MetaData[];
#endif
		static void NewProp_bShowDebugInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDebugInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VRCollabProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRPlayerPawn.h" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_capsuleComponent_MetaData[] = {
		{ "Category", "VRPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_capsuleComponent = { "capsuleComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayerPawn, capsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_capsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_capsuleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_VROffset_MetaData[] = {
		{ "Category", "VRPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_VROffset = { "VROffset", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayerPawn, VROffset), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_VROffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_VROffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightMotionController_MetaData[] = {
		{ "Category", "VRPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightMotionController = { "rightMotionController", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayerPawn, rightMotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightMotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightMotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftMotionController_MetaData[] = {
		{ "Category", "VRPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftMotionController = { "leftMotionController", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayerPawn, leftMotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftMotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftMotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightMesh_MetaData[] = {
		{ "Category", "VRPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightMesh = { "rightMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayerPawn, rightMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftMesh_MetaData[] = {
		{ "Category", "VRPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftMesh = { "leftMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayerPawn, leftMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightGrabSphere_MetaData[] = {
		{ "Category", "VRPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightGrabSphere = { "rightGrabSphere", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayerPawn, rightGrabSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightGrabSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightGrabSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftGrabSphere_MetaData[] = {
		{ "Category", "VRPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftGrabSphere = { "leftGrabSphere", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayerPawn, leftGrabSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftGrabSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftGrabSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_cameraComponent_MetaData[] = {
		{ "Category", "VRPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_cameraComponent = { "cameraComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayerPawn, cameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_cameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_cameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_playerMovementSpeed_MetaData[] = {
		{ "Category", "VRPlayerPawn" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_playerMovementSpeed = { "playerMovementSpeed", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayerPawn, playerMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_playerMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_playerMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_bShowDebugInfo_MetaData[] = {
		{ "Category", "VRPlayerPawn" },
		{ "ModuleRelativePath", "VRPlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_bShowDebugInfo_SetBit(void* Obj)
	{
		((AVRPlayerPawn*)Obj)->bShowDebugInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_bShowDebugInfo = { "bShowDebugInfo", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVRPlayerPawn), &Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_bShowDebugInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_bShowDebugInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_bShowDebugInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRPlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_capsuleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_VROffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightMotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftMotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_rightGrabSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_leftGrabSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_cameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_playerMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerPawn_Statics::NewProp_bShowDebugInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRPlayerPawn_Statics::ClassParams = {
		&AVRPlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVRPlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRPlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRPlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRPlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRPlayerPawn, 3998628655);
	template<> VRCOLLABPROJECT_API UClass* StaticClass<AVRPlayerPawn>()
	{
		return AVRPlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRPlayerPawn(Z_Construct_UClass_AVRPlayerPawn, &AVRPlayerPawn::StaticClass, TEXT("/Script/VRCollabProject"), TEXT("AVRPlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
