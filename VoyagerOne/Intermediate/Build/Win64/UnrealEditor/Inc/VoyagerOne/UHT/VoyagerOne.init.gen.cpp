// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoyagerOne_init() {}
	VOYAGERONE_API UFunction* Z_Construct_UDelegateFunction_VoyagerOne_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VoyagerOne;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VoyagerOne()
	{
		if (!Z_Registration_Info_UPackage__Script_VoyagerOne.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VoyagerOne_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VoyagerOne",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF7A36D5C,
				0x6BB56DD4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VoyagerOne.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VoyagerOne.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VoyagerOne(Z_Construct_UPackage__Script_VoyagerOne, TEXT("/Script/VoyagerOne"), Z_Registration_Info_UPackage__Script_VoyagerOne, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF7A36D5C, 0x6BB56DD4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
