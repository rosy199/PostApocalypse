// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POSTAPOCALYPSE_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define POSTAPOCALYPSE_MyCharacter_generated_h

#define PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_RPC_WRAPPERS
#define PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PostApocalypse"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PostApocalypse"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__cameraComp() { return STRUCT_OFFSET(AMyCharacter, cameraComp); } \
	FORCEINLINE static uint32 __PPO__springArmComp() { return STRUCT_OFFSET(AMyCharacter, springArmComp); }


#define PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_12_PROLOG
#define PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_RPC_WRAPPERS \
	PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_INCLASS \
	PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_INCLASS_NO_PURE_DECLS \
	PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PostApocalypse_Source_PostApocalypse_Public_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
