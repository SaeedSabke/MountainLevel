// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHuman;
#ifdef CODEING2_Human_generated_h
#error "Human.generated.h already included, missing '#pragma once' in Human.h"
#endif
#define CODEING2_Human_generated_h

#define FID_codeing2___Copy_Source_codeing2_Human_h_12_SPARSE_DATA
#define FID_codeing2___Copy_Source_codeing2_Human_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamageMultiplier); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execRandomizeHuman);


#define FID_codeing2___Copy_Source_codeing2_Human_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamageMultiplier); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execRandomizeHuman);


#define FID_codeing2___Copy_Source_codeing2_Human_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHuman(); \
	friend struct Z_Construct_UClass_AHuman_Statics; \
public: \
	DECLARE_CLASS(AHuman, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/codeing2"), NO_API) \
	DECLARE_SERIALIZER(AHuman)


#define FID_codeing2___Copy_Source_codeing2_Human_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHuman(); \
	friend struct Z_Construct_UClass_AHuman_Statics; \
public: \
	DECLARE_CLASS(AHuman, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/codeing2"), NO_API) \
	DECLARE_SERIALIZER(AHuman)


#define FID_codeing2___Copy_Source_codeing2_Human_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHuman(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHuman) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHuman); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHuman); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHuman(AHuman&&); \
	NO_API AHuman(const AHuman&); \
public:


#define FID_codeing2___Copy_Source_codeing2_Human_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHuman(AHuman&&); \
	NO_API AHuman(const AHuman&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHuman); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHuman); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHuman)


#define FID_codeing2___Copy_Source_codeing2_Human_h_9_PROLOG
#define FID_codeing2___Copy_Source_codeing2_Human_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_codeing2___Copy_Source_codeing2_Human_h_12_SPARSE_DATA \
	FID_codeing2___Copy_Source_codeing2_Human_h_12_RPC_WRAPPERS \
	FID_codeing2___Copy_Source_codeing2_Human_h_12_INCLASS \
	FID_codeing2___Copy_Source_codeing2_Human_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_codeing2___Copy_Source_codeing2_Human_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_codeing2___Copy_Source_codeing2_Human_h_12_SPARSE_DATA \
	FID_codeing2___Copy_Source_codeing2_Human_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_codeing2___Copy_Source_codeing2_Human_h_12_INCLASS_NO_PURE_DECLS \
	FID_codeing2___Copy_Source_codeing2_Human_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODEING2_API UClass* StaticClass<class AHuman>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_codeing2___Copy_Source_codeing2_Human_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
