// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "snakers/GameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
SNAKERS_API UClass* Z_Construct_UClass_ASnake_NoRegister();
SNAKERS_API UClass* Z_Construct_UClass_UGameData();
SNAKERS_API UClass* Z_Construct_UClass_UGameData_NoRegister();
SNAKERS_API UFunction* Z_Construct_UDelegateFunction_UGameData_OnEatApple__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_snakers();
// End Cross Module References

// Begin Delegate FOnEatApple
struct Z_Construct_UDelegateFunction_UGameData_OnEatApple__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameData_OnEatApple__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameData, nullptr, "OnEatApple__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameData_OnEatApple__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGameData_OnEatApple__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UGameData_OnEatApple__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGameData_OnEatApple__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UGameData::FOnEatApple_DelegateWrapper(const FMulticastScriptDelegate& OnEatApple)
{
	OnEatApple.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnEatApple

// Begin Class UGameData Function DataSetup
struct Z_Construct_UFunction_UGameData_DataSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SnakeFunctions" },
		{ "ModuleRelativePath", "GameData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameData_DataSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameData, nullptr, "DataSetup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameData_DataSetup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameData_DataSetup_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameData_DataSetup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameData_DataSetup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameData::execDataSetup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DataSetup();
	P_NATIVE_END;
}
// End Class UGameData Function DataSetup

// Begin Class UGameData Function DestroyPlayer2
struct Z_Construct_UFunction_UGameData_DestroyPlayer2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SnakeFunctions" },
		{ "ModuleRelativePath", "GameData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameData_DestroyPlayer2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameData, nullptr, "DestroyPlayer2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameData_DestroyPlayer2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameData_DestroyPlayer2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameData_DestroyPlayer2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameData_DestroyPlayer2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameData::execDestroyPlayer2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyPlayer2();
	P_NATIVE_END;
}
// End Class UGameData Function DestroyPlayer2

// Begin Class UGameData Function GameOverPart2
static const FName NAME_UGameData_GameOverPart2 = FName(TEXT("GameOverPart2"));
void UGameData::GameOverPart2()
{
	UFunction* Func = FindFunctionChecked(NAME_UGameData_GameOverPart2);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UGameData_GameOverPart2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SnakeFunctions" },
		{ "ModuleRelativePath", "GameData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameData_GameOverPart2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameData, nullptr, "GameOverPart2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameData_GameOverPart2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameData_GameOverPart2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameData_GameOverPart2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameData_GameOverPart2_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGameData Function GameOverPart2

// Begin Class UGameData Function GenerateMap
static const FName NAME_UGameData_GenerateMap = FName(TEXT("GenerateMap"));
void UGameData::GenerateMap()
{
	UFunction* Func = FindFunctionChecked(NAME_UGameData_GenerateMap);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UGameData_GenerateMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MapGenerationFunction" },
		{ "ModuleRelativePath", "GameData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameData_GenerateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameData, nullptr, "GenerateMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameData_GenerateMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameData_GenerateMap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameData_GenerateMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameData_GenerateMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGameData Function GenerateMap

// Begin Class UGameData Function MoveApple
struct Z_Construct_UFunction_UGameData_MoveApple_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameData_MoveApple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameData, nullptr, "MoveApple", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameData_MoveApple_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameData_MoveApple_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameData_MoveApple()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameData_MoveApple_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameData::execMoveApple)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveApple();
	P_NATIVE_END;
}
// End Class UGameData Function MoveApple

// Begin Class UGameData
void UGameData::StaticRegisterNativesUGameData()
{
	UClass* Class = UGameData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DataSetup", &UGameData::execDataSetup },
		{ "DestroyPlayer2", &UGameData::execDestroyPlayer2 },
		{ "MoveApple", &UGameData::execMoveApple },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameData);
UClass* Z_Construct_UClass_UGameData_NoRegister()
{
	return UGameData::StaticClass();
}
struct Z_Construct_UClass_UGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GameData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupiedPositions_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEatApple_MetaData[] = {
		{ "ModuleRelativePath", "GameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_snakes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedGameMode_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupiedWalls_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsGameOver_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OccupiedPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OccupiedPositions;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEatApple;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_snakes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_snakes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedGameMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OccupiedWalls_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OccupiedWalls;
	static void NewProp_IsGameOver_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGameOver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameData_DataSetup, "DataSetup" }, // 2512450733
		{ &Z_Construct_UFunction_UGameData_DestroyPlayer2, "DestroyPlayer2" }, // 3768743482
		{ &Z_Construct_UFunction_UGameData_GameOverPart2, "GameOverPart2" }, // 2270364234
		{ &Z_Construct_UFunction_UGameData_GenerateMap, "GenerateMap" }, // 1375756113
		{ &Z_Construct_UFunction_UGameData_MoveApple, "MoveApple" }, // 2120441493
		{ &Z_Construct_UDelegateFunction_UGameData_OnEatApple__DelegateSignature, "OnEatApple__DelegateSignature" }, // 4172243633
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameData_Statics::NewProp_OccupiedPositions_Inner = { "OccupiedPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameData_Statics::NewProp_OccupiedPositions = { "OccupiedPositions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameData, OccupiedPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupiedPositions_MetaData), NewProp_OccupiedPositions_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameData_Statics::NewProp_OnEatApple = { "OnEatApple", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameData, OnEatApple), Z_Construct_UDelegateFunction_UGameData_OnEatApple__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEatApple_MetaData), NewProp_OnEatApple_MetaData) }; // 4172243633
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameData_Statics::NewProp_snakes_Inner = { "snakes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASnake_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameData_Statics::NewProp_snakes = { "snakes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameData, snakes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_snakes_MetaData), NewProp_snakes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameData_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameData, CurrentState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameData_Statics::NewProp_SelectedGameMode = { "SelectedGameMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameData, SelectedGameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedGameMode_MetaData), NewProp_SelectedGameMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameData_Statics::NewProp_OccupiedWalls_Inner = { "OccupiedWalls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameData_Statics::NewProp_OccupiedWalls = { "OccupiedWalls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameData, OccupiedWalls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupiedWalls_MetaData), NewProp_OccupiedWalls_MetaData) };
void Z_Construct_UClass_UGameData_Statics::NewProp_IsGameOver_SetBit(void* Obj)
{
	((UGameData*)Obj)->IsGameOver = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameData_Statics::NewProp_IsGameOver = { "IsGameOver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameData), &Z_Construct_UClass_UGameData_Statics::NewProp_IsGameOver_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsGameOver_MetaData), NewProp_IsGameOver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameData_Statics::NewProp_OccupiedPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameData_Statics::NewProp_OccupiedPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameData_Statics::NewProp_OnEatApple,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameData_Statics::NewProp_snakes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameData_Statics::NewProp_snakes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameData_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameData_Statics::NewProp_SelectedGameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameData_Statics::NewProp_OccupiedWalls_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameData_Statics::NewProp_OccupiedWalls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameData_Statics::NewProp_IsGameOver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_snakers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameData_Statics::ClassParams = {
	&UGameData::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameData_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameData_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameData()
{
	if (!Z_Registration_Info_UClass_UGameData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameData.OuterSingleton, Z_Construct_UClass_UGameData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameData.OuterSingleton;
}
template<> SNAKERS_API UClass* StaticClass<UGameData>()
{
	return UGameData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameData);
UGameData::~UGameData() {}
// End Class UGameData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameData, UGameData::StaticClass, TEXT("UGameData"), &Z_Registration_Info_UClass_UGameData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameData), 4013969319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_1353953366(TEXT("/Script/snakers"),
	Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
