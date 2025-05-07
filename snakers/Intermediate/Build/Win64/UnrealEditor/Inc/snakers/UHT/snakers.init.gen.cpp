// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesnakers_init() {}
	SNAKERS_API UFunction* Z_Construct_UDelegateFunction_UGameData_OnEatApple__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_snakers;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_snakers()
	{
		if (!Z_Registration_Info_UPackage__Script_snakers.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UGameData_OnEatApple__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/snakers",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x407D4618,
				0x59BDFEDF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_snakers.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_snakers.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_snakers(Z_Construct_UPackage__Script_snakers, TEXT("/Script/snakers"), Z_Registration_Info_UPackage__Script_snakers, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x407D4618, 0x59BDFEDF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
