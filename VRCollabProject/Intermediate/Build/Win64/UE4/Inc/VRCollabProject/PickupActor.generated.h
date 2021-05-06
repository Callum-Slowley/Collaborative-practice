// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRCOLLABPROJECT_PickupActor_generated_h
#error "PickupActor.generated.h already included, missing '#pragma once' in PickupActor.h"
#endif
#define VRCOLLABPROJECT_PickupActor_generated_h

#define VRCollabProject_Source_VRCollabProject_PickupActor_h_11_SPARSE_DATA
#define VRCollabProject_Source_VRCollabProject_PickupActor_h_11_RPC_WRAPPERS
#define VRCollabProject_Source_VRCollabProject_PickupActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define VRCollabProject_Source_VRCollabProject_PickupActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupActor(); \
	friend struct Z_Construct_UClass_APickupActor_Statics; \
public: \
	DECLARE_CLASS(APickupActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRCollabProject"), NO_API) \
	DECLARE_SERIALIZER(APickupActor) \
	virtual UObject* _getUObject() const override { return const_cast<APickupActor*>(this); }


#define VRCollabProject_Source_VRCollabProject_PickupActor_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAPickupActor(); \
	friend struct Z_Construct_UClass_APickupActor_Statics; \
public: \
	DECLARE_CLASS(APickupActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRCollabProject"), NO_API) \
	DECLARE_SERIALIZER(APickupActor) \
	virtual UObject* _getUObject() const override { return const_cast<APickupActor*>(this); }


#define VRCollabProject_Source_VRCollabProject_PickupActor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupActor(APickupActor&&); \
	NO_API APickupActor(const APickupActor&); \
public:


#define VRCollabProject_Source_VRCollabProject_PickupActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupActor(APickupActor&&); \
	NO_API APickupActor(const APickupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupActor)


#define VRCollabProject_Source_VRCollabProject_PickupActor_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__staticMeshComponent() { return STRUCT_OFFSET(APickupActor, staticMeshComponent); }


#define VRCollabProject_Source_VRCollabProject_PickupActor_h_8_PROLOG
#define VRCollabProject_Source_VRCollabProject_PickupActor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRCollabProject_Source_VRCollabProject_PickupActor_h_11_PRIVATE_PROPERTY_OFFSET \
	VRCollabProject_Source_VRCollabProject_PickupActor_h_11_SPARSE_DATA \
	VRCollabProject_Source_VRCollabProject_PickupActor_h_11_RPC_WRAPPERS \
	VRCollabProject_Source_VRCollabProject_PickupActor_h_11_INCLASS \
	VRCollabProject_Source_VRCollabProject_PickupActor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRCollabProject_Source_VRCollabProject_PickupActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRCollabProject_Source_VRCollabProject_PickupActor_h_11_PRIVATE_PROPERTY_OFFSET \
	VRCollabProject_Source_VRCollabProject_PickupActor_h_11_SPARSE_DATA \
	VRCollabProject_Source_VRCollabProject_PickupActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	VRCollabProject_Source_VRCollabProject_PickupActor_h_11_INCLASS_NO_PURE_DECLS \
	VRCollabProject_Source_VRCollabProject_PickupActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRCOLLABPROJECT_API UClass* StaticClass<class APickupActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRCollabProject_Source_VRCollabProject_PickupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
