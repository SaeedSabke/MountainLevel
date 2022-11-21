// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "codeing2/codeing2GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecodeing2GameMode() {}
// Cross Module References
	CODEING2_API UClass* Z_Construct_UClass_Acodeing2GameMode_NoRegister();
	CODEING2_API UClass* Z_Construct_UClass_Acodeing2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_codeing2();
// End Cross Module References
	void Acodeing2GameMode::StaticRegisterNativesAcodeing2GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Acodeing2GameMode);
	UClass* Z_Construct_UClass_Acodeing2GameMode_NoRegister()
	{
		return Acodeing2GameMode::StaticClass();
	}
	struct Z_Construct_UClass_Acodeing2GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acodeing2GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_codeing2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acodeing2GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "codeing2GameMode.h" },
		{ "ModuleRelativePath", "codeing2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acodeing2GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acodeing2GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Acodeing2GameMode_Statics::ClassParams = {
		&Acodeing2GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_Acodeing2GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acodeing2GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acodeing2GameMode()
	{
		if (!Z_Registration_Info_UClass_Acodeing2GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Acodeing2GameMode.OuterSingleton, Z_Construct_UClass_Acodeing2GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Acodeing2GameMode.OuterSingleton;
	}
	template<> CODEING2_API UClass* StaticClass<Acodeing2GameMode>()
	{
		return Acodeing2GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acodeing2GameMode);
	struct Z_CompiledInDeferFile_FID_codeing2___Copy_Source_codeing2_codeing2GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_codeing2___Copy_Source_codeing2_codeing2GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Acodeing2GameMode, Acodeing2GameMode::StaticClass, TEXT("Acodeing2GameMode"), &Z_Registration_Info_UClass_Acodeing2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Acodeing2GameMode), 2684216137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_codeing2___Copy_Source_codeing2_codeing2GameMode_h_2435629125(TEXT("/Script/codeing2"),
		Z_CompiledInDeferFile_FID_codeing2___Copy_Source_codeing2_codeing2GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_codeing2___Copy_Source_codeing2_codeing2GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
