// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoyagerOneWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoyagerOneCharacter;
#ifdef VOYAGERONE_VoyagerOneWeaponComponent_generated_h
#error "VoyagerOneWeaponComponent.generated.h already included, missing '#pragma once' in VoyagerOneWeaponComponent.h"
#endif
#define VOYAGERONE_VoyagerOneWeaponComponent_generated_h

#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoyagerOneWeaponComponent(); \
	friend struct Z_Construct_UClass_UVoyagerOneWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UVoyagerOneWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoyagerOne"), NO_API) \
	DECLARE_SERIALIZER(UVoyagerOneWeaponComponent)


#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVoyagerOneWeaponComponent(UVoyagerOneWeaponComponent&&); \
	UVoyagerOneWeaponComponent(const UVoyagerOneWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoyagerOneWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoyagerOneWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoyagerOneWeaponComponent) \
	NO_API virtual ~UVoyagerOneWeaponComponent();


#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneWeaponComponent_h_11_PROLOG
#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOYAGERONE_API UClass* StaticClass<class UVoyagerOneWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
