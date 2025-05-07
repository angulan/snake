// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Snake.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKERS_Snake_generated_h
#error "Snake.generated.h already included, missing '#pragma once' in Snake.h"
#endif
#define SNAKERS_Snake_generated_h

#define FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_Snake_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnake(); \
	friend struct Z_Construct_UClass_ASnake_Statics; \
public: \
	DECLARE_CLASS(ASnake, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/snakers"), NO_API) \
	DECLARE_SERIALIZER(ASnake)


#define FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_Snake_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASnake(ASnake&&); \
	ASnake(const ASnake&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnake); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnake) \
	NO_API virtual ~ASnake();


#define FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_Snake_h_15_PROLOG
#define FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_Snake_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_Snake_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_Snake_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKERS_API UClass* StaticClass<class ASnake>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_AntonLanning_Documents_Unreal_Projects_SnakeGAME_snakers_Source_snakers_Snake_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
