// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "codeing2/Human.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHuman() {}
// Cross Module References
	CODEING2_API UClass* Z_Construct_UClass_AHuman_NoRegister();
	CODEING2_API UClass* Z_Construct_UClass_AHuman();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_codeing2();
// End Cross Module References
	DEFINE_FUNCTION(AHuman::execDamageMultiplier)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GivenElemType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->DamageMultiplier(Z_Param_GivenElemType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHuman::execTakeDamage)
	{
		P_GET_OBJECT(AHuman,Z_Param_attacker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_attacker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHuman::execRandomizeHuman)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RandomizeHuman();
		P_NATIVE_END;
	}
	void AHuman::StaticRegisterNativesAHuman()
	{
		UClass* Class = AHuman::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageMultiplier", &AHuman::execDamageMultiplier },
			{ "RandomizeHuman", &AHuman::execRandomizeHuman },
			{ "TakeDamage", &AHuman::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHuman_DamageMultiplier_Statics
	{
		struct Human_eventDamageMultiplier_Parms
		{
			int32 GivenElemType;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_GivenElemType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHuman_DamageMultiplier_Statics::NewProp_GivenElemType = { "GivenElemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Human_eventDamageMultiplier_Parms, GivenElemType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHuman_DamageMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Human_eventDamageMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHuman_DamageMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHuman_DamageMultiplier_Statics::NewProp_GivenElemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHuman_DamageMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHuman_DamageMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Human.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHuman_DamageMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHuman, nullptr, "DamageMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHuman_DamageMultiplier_Statics::Human_eventDamageMultiplier_Parms), Z_Construct_UFunction_AHuman_DamageMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHuman_DamageMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHuman_DamageMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHuman_DamageMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHuman_DamageMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHuman_DamageMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHuman_RandomizeHuman_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHuman_RandomizeHuman_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//FString Elements[3];\n" },
		{ "ModuleRelativePath", "Human.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nFString Elements[3];" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHuman_RandomizeHuman_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHuman, nullptr, "RandomizeHuman", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHuman_RandomizeHuman_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHuman_RandomizeHuman_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHuman_RandomizeHuman()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHuman_RandomizeHuman_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHuman_TakeDamage_Statics
	{
		struct Human_eventTakeDamage_Parms
		{
			AHuman* attacker;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attacker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHuman_TakeDamage_Statics::NewProp_attacker = { "attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Human_eventTakeDamage_Parms, attacker), Z_Construct_UClass_AHuman_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHuman_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHuman_TakeDamage_Statics::NewProp_attacker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHuman_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Human.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHuman_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHuman, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHuman_TakeDamage_Statics::Human_eventTakeDamage_Parms), Z_Construct_UFunction_AHuman_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHuman_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHuman_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHuman_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHuman_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHuman_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHuman);
	UClass* Z_Construct_UClass_AHuman_NoRegister()
	{
		return AHuman::StaticClass();
	}
	struct Z_Construct_UClass_AHuman_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementalType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElementalType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHuman_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_codeing2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHuman_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHuman_DamageMultiplier, "DamageMultiplier" }, // 4117874541
		{ &Z_Construct_UFunction_AHuman_RandomizeHuman, "RandomizeHuman" }, // 1017189756
		{ &Z_Construct_UFunction_AHuman_TakeDamage, "TakeDamage" }, // 1281090902
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHuman_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Human.h" },
		{ "ModuleRelativePath", "Human.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHuman_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "Human" },
		{ "ModuleRelativePath", "Human.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHuman_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHuman, PlayerName), METADATA_PARAMS(Z_Construct_UClass_AHuman_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHuman_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHuman_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Human" },
		{ "ModuleRelativePath", "Human.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHuman_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHuman, Health), METADATA_PARAMS(Z_Construct_UClass_AHuman_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHuman_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHuman_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Human" },
		{ "ModuleRelativePath", "Human.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHuman_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHuman, Damage), METADATA_PARAMS(Z_Construct_UClass_AHuman_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHuman_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHuman_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Human" },
		{ "ModuleRelativePath", "Human.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHuman_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHuman, Speed), METADATA_PARAMS(Z_Construct_UClass_AHuman_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHuman_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHuman_Statics::NewProp_ElementalType_MetaData[] = {
		{ "Category", "Human" },
		{ "ModuleRelativePath", "Human.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHuman_Statics::NewProp_ElementalType = { "ElementalType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHuman, ElementalType), METADATA_PARAMS(Z_Construct_UClass_AHuman_Statics::NewProp_ElementalType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHuman_Statics::NewProp_ElementalType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHuman_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHuman_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHuman_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHuman_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHuman_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHuman_Statics::NewProp_ElementalType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHuman_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHuman>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHuman_Statics::ClassParams = {
		&AHuman::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHuman_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHuman_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHuman_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHuman_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHuman()
	{
		if (!Z_Registration_Info_UClass_AHuman.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHuman.OuterSingleton, Z_Construct_UClass_AHuman_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHuman.OuterSingleton;
	}
	template<> CODEING2_API UClass* StaticClass<AHuman>()
	{
		return AHuman::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHuman);
	struct Z_CompiledInDeferFile_FID_codeing2___Copy_Source_codeing2_Human_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_codeing2___Copy_Source_codeing2_Human_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHuman, AHuman::StaticClass, TEXT("AHuman"), &Z_Registration_Info_UClass_AHuman, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHuman), 3607228055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_codeing2___Copy_Source_codeing2_Human_h_791534145(TEXT("/Script/codeing2"),
		Z_CompiledInDeferFile_FID_codeing2___Copy_Source_codeing2_Human_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_codeing2___Copy_Source_codeing2_Human_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
