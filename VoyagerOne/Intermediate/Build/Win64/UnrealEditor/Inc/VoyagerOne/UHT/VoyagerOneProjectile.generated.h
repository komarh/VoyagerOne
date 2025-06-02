// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoyagerOneProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef VOYAGERONE_VoyagerOneProjectile_generated_h
#error "VoyagerOneProjectile.generated.h already included, missing '#pragma once' in VoyagerOneProjectile.h"
#endif
#define VOYAGERONE_VoyagerOneProjectile_generated_h

#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoyagerOneProjectile(); \
	friend struct Z_Construct_UClass_AVoyagerOneProjectile_Statics; \
public: \
	DECLARE_CLASS(AVoyagerOneProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoyagerOne"), NO_API) \
	DECLARE_SERIALIZER(AVoyagerOneProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVoyagerOneProjectile(AVoyagerOneProjectile&&); \
	AVoyagerOneProjectile(const AVoyagerOneProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoyagerOneProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoyagerOneProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoyagerOneProjectile) \
	NO_API virtual ~AVoyagerOneProjectile();


#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneProjectile_h_12_PROLOG
#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOYAGERONE_API UClass* StaticClass<class AVoyagerOneProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
