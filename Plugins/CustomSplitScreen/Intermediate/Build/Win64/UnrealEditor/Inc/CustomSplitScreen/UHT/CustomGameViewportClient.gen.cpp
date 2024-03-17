// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomSplitScreen/Public/CustomGameViewportClient.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGameViewportClient() {}
// Cross Module References
	CUSTOMSPLITSCREEN_API UClass* Z_Construct_UClass_UCustomGameViewportClient();
	CUSTOMSPLITSCREEN_API UClass* Z_Construct_UClass_UCustomGameViewportClient_NoRegister();
	CUSTOMSPLITSCREEN_API UEnum* Z_Construct_UEnum_CustomSplitScreen_ECustomSplitScreenType();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UPackage* Z_Construct_UPackage__Script_CustomSplitScreen();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomSplitScreenType;
	static UEnum* ECustomSplitScreenType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomSplitScreenType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomSplitScreenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomSplitScreen_ECustomSplitScreenType, (UObject*)Z_Construct_UPackage__Script_CustomSplitScreen(), TEXT("ECustomSplitScreenType"));
		}
		return Z_Registration_Info_UEnum_ECustomSplitScreenType.OuterSingleton;
	}
	template<> CUSTOMSPLITSCREEN_API UEnum* StaticEnum<ECustomSplitScreenType::Type>()
	{
		return ECustomSplitScreenType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomSplitScreen_ECustomSplitScreenType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomSplitScreen_ECustomSplitScreenType_Statics::Enumerators[] = {
		{ "ECustomSplitScreenType::None", (int64)ECustomSplitScreenType::None },
		{ "ECustomSplitScreenType::TwoPlayer", (int64)ECustomSplitScreenType::TwoPlayer },
		{ "ECustomSplitScreenType::SplitTypeCount", (int64)ECustomSplitScreenType::SplitTypeCount },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomSplitScreen_ECustomSplitScreenType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomGameViewportClient.h" },
		{ "None.Comment", "// 0 value required by UE\n" },
		{ "None.Name", "ECustomSplitScreenType::None" },
		{ "None.ToolTip", "0 value required by UE" },
		{ "SplitTypeCount.Name", "ECustomSplitScreenType::SplitTypeCount" },
		{ "TwoPlayer.Comment", "// Custom Splitscreen, next value after last built-in splitscreen type\n" },
		{ "TwoPlayer.Name", "ECustomSplitScreenType::TwoPlayer" },
		{ "TwoPlayer.ToolTip", "Custom Splitscreen, next value after last built-in splitscreen type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomSplitScreen_ECustomSplitScreenType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomSplitScreen,
		nullptr,
		"ECustomSplitScreenType",
		"ECustomSplitScreenType::Type",
		Z_Construct_UEnum_CustomSplitScreen_ECustomSplitScreenType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomSplitScreen_ECustomSplitScreenType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CustomSplitScreen_ECustomSplitScreenType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CustomSplitScreen_ECustomSplitScreenType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CustomSplitScreen_ECustomSplitScreenType()
	{
		if (!Z_Registration_Info_UEnum_ECustomSplitScreenType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomSplitScreenType.InnerSingleton, Z_Construct_UEnum_CustomSplitScreen_ECustomSplitScreenType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomSplitScreenType.InnerSingleton;
	}
	DEFINE_FUNCTION(UCustomGameViewportClient::execUpdateActiveSplitscreenType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateActiveSplitscreenType();
		P_NATIVE_END;
	}
	void UCustomGameViewportClient::StaticRegisterNativesUCustomGameViewportClient()
	{
		UClass* Class = UCustomGameViewportClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateActiveSplitscreenType", &UCustomGameViewportClient::execUpdateActiveSplitscreenType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomGameViewportClient_UpdateActiveSplitscreenType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGameViewportClient_UpdateActiveSplitscreenType_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplitScreenViewportSize" },
		{ "ModuleRelativePath", "Public/CustomGameViewportClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameViewportClient_UpdateActiveSplitscreenType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGameViewportClient, nullptr, "UpdateActiveSplitscreenType", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameViewportClient_UpdateActiveSplitscreenType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameViewportClient_UpdateActiveSplitscreenType_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCustomGameViewportClient_UpdateActiveSplitscreenType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameViewportClient_UpdateActiveSplitscreenType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomGameViewportClient);
	UClass* Z_Construct_UClass_UCustomGameViewportClient_NoRegister()
	{
		return UCustomGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UCustomGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player1_NewSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Player1_NewSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player1_NewSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Player1_NewSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player2_NewSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Player2_NewSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player2_NewSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Player2_NewSizeY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomSplitScreen,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameViewportClient_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomGameViewportClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomGameViewportClient_UpdateActiveSplitscreenType, "UpdateActiveSplitscreenType" }, // 551767080
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameViewportClient_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CustomGameViewportClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomGameViewportClient.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player1_NewSizeX_MetaData[] = {
		{ "Category", "SplitScreenViewportSize|Player 1" },
		{ "ModuleRelativePath", "Public/CustomGameViewportClient.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player1_NewSizeX = { "Player1_NewSizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameViewportClient, Player1_NewSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player1_NewSizeX_MetaData), Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player1_NewSizeX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player1_NewSizeY_MetaData[] = {
		{ "Category", "SplitScreenViewportSize|Player 1" },
		{ "ModuleRelativePath", "Public/CustomGameViewportClient.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player1_NewSizeY = { "Player1_NewSizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameViewportClient, Player1_NewSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player1_NewSizeY_MetaData), Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player1_NewSizeY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player2_NewSizeX_MetaData[] = {
		{ "Category", "SplitScreenViewportSize|Player 2" },
		{ "ModuleRelativePath", "Public/CustomGameViewportClient.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player2_NewSizeX = { "Player2_NewSizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameViewportClient, Player2_NewSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player2_NewSizeX_MetaData), Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player2_NewSizeX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player2_NewSizeY_MetaData[] = {
		{ "Category", "SplitScreenViewportSize|Player 2" },
		{ "ModuleRelativePath", "Public/CustomGameViewportClient.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player2_NewSizeY = { "Player2_NewSizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameViewportClient, Player2_NewSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player2_NewSizeY_MetaData), Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player2_NewSizeY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomGameViewportClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player1_NewSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player1_NewSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player2_NewSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameViewportClient_Statics::NewProp_Player2_NewSizeY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomGameViewportClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomGameViewportClient_Statics::ClassParams = {
		&UCustomGameViewportClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomGameViewportClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameViewportClient_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameViewportClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomGameViewportClient_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameViewportClient_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomGameViewportClient()
	{
		if (!Z_Registration_Info_UClass_UCustomGameViewportClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomGameViewportClient.OuterSingleton, Z_Construct_UClass_UCustomGameViewportClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomGameViewportClient.OuterSingleton;
	}
	template<> CUSTOMSPLITSCREEN_API UClass* StaticClass<UCustomGameViewportClient>()
	{
		return UCustomGameViewportClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomGameViewportClient);
	UCustomGameViewportClient::~UCustomGameViewportClient() {}
	struct Z_CompiledInDeferFile_FID_My_Data_Unreal_Projects_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Data_Unreal_Projects_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_Statics::EnumInfo[] = {
		{ ECustomSplitScreenType_StaticEnum, TEXT("ECustomSplitScreenType"), &Z_Registration_Info_UEnum_ECustomSplitScreenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 522681241U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Data_Unreal_Projects_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomGameViewportClient, UCustomGameViewportClient::StaticClass, TEXT("UCustomGameViewportClient"), &Z_Registration_Info_UClass_UCustomGameViewportClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomGameViewportClient), 889083277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Data_Unreal_Projects_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_2186406904(TEXT("/Script/CustomSplitScreen"),
		Z_CompiledInDeferFile_FID_My_Data_Unreal_Projects_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Data_Unreal_Projects_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_My_Data_Unreal_Projects_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Data_Unreal_Projects_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
