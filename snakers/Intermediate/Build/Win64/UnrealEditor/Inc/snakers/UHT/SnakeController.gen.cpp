// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "snakers/SnakeController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SNAKERS_API UClass* Z_Construct_UClass_ASnakeController();
SNAKERS_API UClass* Z_Construct_UClass_ASnakeController_NoRegister();
UPackage* Z_Construct_UPackage__Script_snakers();
// End Cross Module References

// Begin Class ASnakeController
void ASnakeController::StaticRegisterNativesASnakeController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeController);
UClass* Z_Construct_UClass_ASnakeController_NoRegister()
{
	return ASnakeController::StaticClass();
}
struct Z_Construct_UClass_ASnakeController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SnakeController.h" },
		{ "ModuleRelativePath", "SnakeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveContext_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SnakeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SnakeController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_moveContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_moveAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeController_Statics::NewProp_moveContext = { "moveContext", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeController, moveContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveContext_MetaData), NewProp_moveContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeController_Statics::NewProp_moveAction = { "moveAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeController, moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveAction_MetaData), NewProp_moveAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeController_Statics::NewProp_moveContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeController_Statics::NewProp_moveAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnakeController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_snakers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeController_Statics::ClassParams = {
	&ASnakeController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASnakeController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakeController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnakeController()
{
	if (!Z_Registration_Info_UClass_ASnakeController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeController.OuterSingleton, Z_Construct_UClass_ASnakeController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnakeController.OuterSingleton;
}
template<> SNAKERS_API UClass* StaticClass<ASnakeController>()
{
	return ASnakeController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeController);
ASnakeController::~ASnakeController() {}
// End Class ASnakeController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_snakers_Source_snakers_SnakeController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeController, ASnakeController::StaticClass, TEXT("ASnakeController"), &Z_Registration_Info_UClass_ASnakeController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeController), 4195305207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_snakers_Source_snakers_SnakeController_h_3500266516(TEXT("/Script/snakers"),
	Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_snakers_Source_snakers_SnakeController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_snakers_Source_snakers_SnakeController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
