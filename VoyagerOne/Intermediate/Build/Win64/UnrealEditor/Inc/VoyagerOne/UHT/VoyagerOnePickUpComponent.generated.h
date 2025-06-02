// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoyagerOnePickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AVoyagerOneCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef VOYAGERONE_VoyagerOnePickUpComponent_generated_h
#error "VoyagerOnePickUpComponent.generated.h already included, missing '#pragma once' in VoyagerOnePickUpComponent.h"
#endif
#define VOYAGERONE_VoyagerOnePickUpComponent_generated_h

#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOnePickUpComponent_h_12_DELEGATE \
VOYAGERONE_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AVoyagerOneCharacter* PickUpCharacter);


#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOnePickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOnePickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoyagerOnePickUpComponent(); \
	friend struct Z_Construct_UClass_UVoyagerOnePickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UVoyagerOnePickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoyagerOne"), NO_API) \
	DECLARE_SERIALIZER(UVoyagerOnePickUpComponent)


#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOnePickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVoyagerOnePickUpComponent(UVoyagerOnePickUpComponent&&); \
	UVoyagerOnePickUpComponent(const UVoyagerOnePickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoyagerOnePickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoyagerOnePickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoyagerOnePickUpComponent) \
	NO_API virtual ~UVoyagerOnePickUpComponent();


#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOnePickUpComponent_h_14_PROLOG
#define FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOnePickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOnePickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOnePickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOnePickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOYAGERONE_API UClass* StaticClass<class UVoyagerOnePickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOnePickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
