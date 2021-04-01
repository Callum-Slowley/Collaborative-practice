// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRCOLLABPROJECT_PickupInterface_generated_h
#error "PickupInterface.generated.h already included, missing '#pragma once' in PickupInterface.h"
#endif
#define VRCOLLABPROJECT_PickupInterface_generated_h

#define VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_SPARSE_DATA
#define VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_RPC_WRAPPERS
#define VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VRCOLLABPROJECT_API UPickupInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VRCOLLABPROJECT_API, UPickupInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VRCOLLABPROJECT_API UPickupInterface(UPickupInterface&&); \
	VRCOLLABPROJECT_API UPickupInterface(const UPickupInterface&); \
public:


#define VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VRCOLLABPROJECT_API UPickupInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VRCOLLABPROJECT_API UPickupInterface(UPickupInterface&&); \
	VRCOLLABPROJECT_API UPickupInterface(const UPickupInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VRCOLLABPROJECT_API, UPickupInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupInterface)


#define VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPickupInterface(); \
	friend struct Z_Construct_UClass_UPickupInterface_Statics; \
public: \
	DECLARE_CLASS(UPickupInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VRCollabProject"), VRCOLLABPROJECT_API) \
	DECLARE_SERIALIZER(UPickupInterface)


#define VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_GENERATED_UINTERFACE_BODY() \
	VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_GENERATED_UINTERFACE_BODY() \
	VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPickupInterface() {} \
public: \
	typedef UPickupInterface UClassType; \
	typedef IPickupInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPickupInterface() {} \
public: \
	typedef UPickupInterface UClassType; \
	typedef IPickupInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define VRCollabProject_Source_VRCollabProject_PickupInterface_h_10_PROLOG
#define VRCollabProject_Source_VRCollabProject_PickupInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_SPARSE_DATA \
	VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_RPC_WRAPPERS \
	VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRCollabProject_Source_VRCollabProject_PickupInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_SPARSE_DATA \
	VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	VRCollabProject_Source_VRCollabProject_PickupInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRCOLLABPROJECT_API UClass* StaticClass<class UPickupInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRCollabProject_Source_VRCollabProject_PickupInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
