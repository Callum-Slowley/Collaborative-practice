// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRCOLLABPROJECT_VRPlayerPawn_generated_h
#error "VRPlayerPawn.generated.h already included, missing '#pragma once' in VRPlayerPawn.h"
#endif
#define VRCOLLABPROJECT_VRPlayerPawn_generated_h

#define VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_SPARSE_DATA
#define VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_RPC_WRAPPERS
#define VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRPlayerPawn(); \
	friend struct Z_Construct_UClass_AVRPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AVRPlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRCollabProject"), NO_API) \
	DECLARE_SERIALIZER(AVRPlayerPawn)


#define VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAVRPlayerPawn(); \
	friend struct Z_Construct_UClass_AVRPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AVRPlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRCollabProject"), NO_API) \
	DECLARE_SERIALIZER(AVRPlayerPawn)


#define VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRPlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRPlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRPlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRPlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRPlayerPawn(AVRPlayerPawn&&); \
	NO_API AVRPlayerPawn(const AVRPlayerPawn&); \
public:


#define VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRPlayerPawn(AVRPlayerPawn&&); \
	NO_API AVRPlayerPawn(const AVRPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRPlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRPlayerPawn)


#define VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bShowDebugInfo() { return STRUCT_OFFSET(AVRPlayerPawn, bShowDebugInfo); } \
	FORCEINLINE static uint32 __PPO__playerMovementSpeed() { return STRUCT_OFFSET(AVRPlayerPawn, playerMovementSpeed); } \
	FORCEINLINE static uint32 __PPO__cameraComponent() { return STRUCT_OFFSET(AVRPlayerPawn, cameraComponent); } \
	FORCEINLINE static uint32 __PPO__leftGrabSphere() { return STRUCT_OFFSET(AVRPlayerPawn, leftGrabSphere); } \
	FORCEINLINE static uint32 __PPO__rightGrabSphere() { return STRUCT_OFFSET(AVRPlayerPawn, rightGrabSphere); } \
	FORCEINLINE static uint32 __PPO__leftMesh() { return STRUCT_OFFSET(AVRPlayerPawn, leftMesh); } \
	FORCEINLINE static uint32 __PPO__rightMesh() { return STRUCT_OFFSET(AVRPlayerPawn, rightMesh); } \
	FORCEINLINE static uint32 __PPO__leftMotionController() { return STRUCT_OFFSET(AVRPlayerPawn, leftMotionController); } \
	FORCEINLINE static uint32 __PPO__rightMotionController() { return STRUCT_OFFSET(AVRPlayerPawn, rightMotionController); } \
	FORCEINLINE static uint32 __PPO__rootSceneComponent() { return STRUCT_OFFSET(AVRPlayerPawn, rootSceneComponent); } \
	FORCEINLINE static uint32 __PPO__VROffset() { return STRUCT_OFFSET(AVRPlayerPawn, VROffset); }


#define VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_14_PROLOG
#define VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_SPARSE_DATA \
	VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_RPC_WRAPPERS \
	VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_INCLASS \
	VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_SPARSE_DATA \
	VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_INCLASS_NO_PURE_DECLS \
	VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRCOLLABPROJECT_API UClass* StaticClass<class AVRPlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRCollabProject_Source_VRCollabProject_VRPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
