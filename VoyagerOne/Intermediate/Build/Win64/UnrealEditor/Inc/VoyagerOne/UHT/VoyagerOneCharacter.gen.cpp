// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoyagerOne/VoyagerOneCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoyagerOneCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoyagerOne();
VOYAGERONE_API UClass* Z_Construct_UClass_AVoyagerOneCharacter();
VOYAGERONE_API UClass* Z_Construct_UClass_AVoyagerOneCharacter_NoRegister();
// End Cross Module References

// Begin Class AVoyagerOneCharacter
void AVoyagerOneCharacter::StaticRegisterNativesAVoyagerOneCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoyagerOneCharacter);
UClass* Z_Construct_UClass_AVoyagerOneCharacter_NoRegister()
{
	return AVoyagerOneCharacter::StaticClass();
}
struct Z_Construct_UClass_AVoyagerOneCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VoyagerOneCharacter.h" },
		{ "ModuleRelativePath", "VoyagerOneCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VoyagerOneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VoyagerOneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "VoyagerOneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "VoyagerOneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "VoyagerOneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "VoyagerOneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoyagerOneCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoyagerOneCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoyagerOneCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1P_MetaData), NewProp_Mesh1P_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoyagerOneCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoyagerOneCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoyagerOneCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoyagerOneCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoyagerOneCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoyagerOneCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoyagerOneCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoyagerOneCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoyagerOneCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoyagerOneCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoyagerOneCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoyagerOneCharacter_Statics::NewProp_Mesh1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoyagerOneCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoyagerOneCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoyagerOneCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoyagerOneCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoyagerOneCharacter_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoyagerOneCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoyagerOneCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_VoyagerOne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoyagerOneCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoyagerOneCharacter_Statics::ClassParams = {
	&AVoyagerOneCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVoyagerOneCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoyagerOneCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoyagerOneCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoyagerOneCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoyagerOneCharacter()
{
	if (!Z_Registration_Info_UClass_AVoyagerOneCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoyagerOneCharacter.OuterSingleton, Z_Construct_UClass_AVoyagerOneCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoyagerOneCharacter.OuterSingleton;
}
template<> VOYAGERONE_API UClass* StaticClass<AVoyagerOneCharacter>()
{
	return AVoyagerOneCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoyagerOneCharacter);
AVoyagerOneCharacter::~AVoyagerOneCharacter() {}
// End Class AVoyagerOneCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoyagerOneCharacter, AVoyagerOneCharacter::StaticClass, TEXT("AVoyagerOneCharacter"), &Z_Registration_Info_UClass_AVoyagerOneCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoyagerOneCharacter), 3789009520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneCharacter_h_158842365(TEXT("/Script/VoyagerOne"),
	Z_CompiledInDeferFile_FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
