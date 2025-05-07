// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKERS_GameData_generated_h
#error "GameData.generated.h already included, missing '#pragma once' in GameData.h"
#endif
#define SNAKERS_GameData_generated_h

#define FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_37_DELEGATE \
static void FOnEatApple_DelegateWrapper(const FMulticastScriptDelegate& OnEatApple);


#define FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroyPlayer2); \
	DECLARE_FUNCTION(execDataSetup); \
	DECLARE_FUNCTION(execMoveApple);


#define FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_15_CALLBACK_WRAPPERS
#define FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameData(); \
	friend struct Z_Construct_UClass_UGameData_Statics; \
public: \
	DECLARE_CLASS(UGameData, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/snakers"), NO_API) \
	DECLARE_SERIALIZER(UGameData)


#define FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameData(UGameData&&); \
	UGameData(const UGameData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameData) \
	NO_API virtual ~UGameData();


#define FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_12_PROLOG
#define FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_15_CALLBACK_WRAPPERS \
	FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKERS_API UClass* StaticClass<class UGameData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_GameData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
