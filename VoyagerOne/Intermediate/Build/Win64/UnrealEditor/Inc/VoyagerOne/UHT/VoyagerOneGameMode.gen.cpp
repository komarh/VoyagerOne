// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoyagerOne/VoyagerOneGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoyagerOneGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_VoyagerOne();
VOYAGERONE_API UClass* Z_Construct_UClass_AVoyagerOneGameMode();
VOYAGERONE_API UClass* Z_Construct_UClass_AVoyagerOneGameMode_NoRegister();
// End Cross Module References

// Begin Class AVoyagerOneGameMode
void AVoyagerOneGameMode::StaticRegisterNativesAVoyagerOneGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoyagerOneGameMode);
UClass* Z_Construct_UClass_AVoyagerOneGameMode_NoRegister()
{
	return AVoyagerOneGameMode::StaticClass();
}
struct Z_Construct_UClass_AVoyagerOneGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VoyagerOneGameMode.h" },
		{ "ModuleRelativePath", "VoyagerOneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoyagerOneGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVoyagerOneGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VoyagerOne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoyagerOneGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoyagerOneGameMode_Statics::ClassParams = {
	&AVoyagerOneGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoyagerOneGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoyagerOneGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoyagerOneGameMode()
{
	if (!Z_Registration_Info_UClass_AVoyagerOneGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoyagerOneGameMode.OuterSingleton, Z_Construct_UClass_AVoyagerOneGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoyagerOneGameMode.OuterSingleton;
}
template<> VOYAGERONE_API UClass* StaticClass<AVoyagerOneGameMode>()
{
	return AVoyagerOneGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoyagerOneGameMode);
AVoyagerOneGameMode::~AVoyagerOneGameMode() {}
// End Class AVoyagerOneGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoyagerOneGameMode, AVoyagerOneGameMode::StaticClass, TEXT("AVoyagerOneGameMode"), &Z_Registration_Info_UClass_AVoyagerOneGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoyagerOneGameMode), 347010735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneGameMode_h_2255290099(TEXT("/Script/VoyagerOne"),
	Z_CompiledInDeferFile_FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MVMNT_Projects_VoyagerOne_VoyagerOne_VoyagerOne_Source_VoyagerOne_VoyagerOneGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
