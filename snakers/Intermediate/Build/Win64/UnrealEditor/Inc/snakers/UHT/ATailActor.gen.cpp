// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "snakers/ATailActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATailActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SNAKERS_API UClass* Z_Construct_UClass_ATailActor();
SNAKERS_API UClass* Z_Construct_UClass_ATailActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_snakers();
// End Cross Module References

// Begin Class ATailActor
void ATailActor::StaticRegisterNativesATailActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATailActor);
UClass* Z_Construct_UClass_ATailActor_NoRegister()
{
	return ATailActor::StaticClass();
}
struct Z_Construct_UClass_ATailActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ATailActor.h" },
		{ "ModuleRelativePath", "ATailActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "TailActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ATailActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATailActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATailActor_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATailActor, SphereComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATailActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATailActor_Statics::NewProp_SphereComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATailActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATailActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_snakers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATailActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATailActor_Statics::ClassParams = {
	&ATailActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATailActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATailActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATailActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATailActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATailActor()
{
	if (!Z_Registration_Info_UClass_ATailActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATailActor.OuterSingleton, Z_Construct_UClass_ATailActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATailActor.OuterSingleton;
}
template<> SNAKERS_API UClass* StaticClass<ATailActor>()
{
	return ATailActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATailActor);
ATailActor::~ATailActor() {}
// End Class ATailActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_ATailActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATailActor, ATailActor::StaticClass, TEXT("ATailActor"), &Z_Registration_Info_UClass_ATailActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATailActor), 1990473534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_ATailActor_h_658075346(TEXT("/Script/snakers"),
	Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_ATailActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_ATailActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
