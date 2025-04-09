// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "snakers/Snake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnake() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SNAKERS_API UClass* Z_Construct_UClass_ASnake();
SNAKERS_API UClass* Z_Construct_UClass_ASnake_NoRegister();
UPackage* Z_Construct_UPackage__Script_snakers();
// End Cross Module References

// Begin Class ASnake
void ASnake::StaticRegisterNativesASnake()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnake);
UClass* Z_Construct_UClass_ASnake_NoRegister()
{
	return ASnake::StaticClass();
}
struct Z_Construct_UClass_ASnake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Snake.h" },
		{ "ModuleRelativePath", "Snake.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Snake.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Snake.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Horizontal_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Snake.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Vertical_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Snake.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_speed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Horizontal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Vertical;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnake>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASnake_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnake, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnake_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnake, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnake_Statics::NewProp_IA_Horizontal = { "IA_Horizontal", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnake, IA_Horizontal), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Horizontal_MetaData), NewProp_IA_Horizontal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnake_Statics::NewProp_IA_Vertical = { "IA_Vertical", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnake, IA_Vertical), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Vertical_MetaData), NewProp_IA_Vertical_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnake_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnake_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnake_Statics::NewProp_IA_Horizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnake_Statics::NewProp_IA_Vertical,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnake_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_snakers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnake_Statics::ClassParams = {
	&ASnake::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASnake_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnake_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnake()
{
	if (!Z_Registration_Info_UClass_ASnake.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnake.OuterSingleton, Z_Construct_UClass_ASnake_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnake.OuterSingleton;
}
template<> SNAKERS_API UClass* StaticClass<ASnake>()
{
	return ASnake::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnake);
ASnake::~ASnake() {}
// End Class ASnake

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_snakers_Source_snakers_Snake_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnake, ASnake::StaticClass, TEXT("ASnake"), &Z_Registration_Info_UClass_ASnake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnake), 163203283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_snakers_Source_snakers_Snake_h_3275895663(TEXT("/Script/snakers"),
	Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_snakers_Source_snakers_Snake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_snakers_Source_snakers_Snake_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
