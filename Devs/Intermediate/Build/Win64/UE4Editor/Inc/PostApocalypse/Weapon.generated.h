// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POSTAPOCALYPSE_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define POSTAPOCALYPSE_Weapon_generated_h

#define PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PostApocalypse"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PostApocalypse"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__meshComp() { return STRUCT_OFFSET(AWeapon, meshComp); } \
	FORCEINLINE static uint32 __PPO__damageType() { return STRUCT_OFFSET(AWeapon, damageType); } \
	FORCEINLINE static uint32 __PPO__muzzleSocketName() { return STRUCT_OFFSET(AWeapon, muzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__muzzleEffect() { return STRUCT_OFFSET(AWeapon, muzzleEffect); } \
	FORCEINLINE static uint32 __PPO__impactEffect() { return STRUCT_OFFSET(AWeapon, impactEffect); }


#define PostApocalypse_Source_PostApocalypse_Public_Weapon_h_9_PROLOG
#define PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_PRIVATE_PROPERTY_OFFSET \
	PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_RPC_WRAPPERS \
	PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_INCLASS \
	PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_PRIVATE_PROPERTY_OFFSET \
	PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_INCLASS_NO_PURE_DECLS \
	PostApocalypse_Source_PostApocalypse_Public_Weapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PostApocalypse_Source_PostApocalypse_Public_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
