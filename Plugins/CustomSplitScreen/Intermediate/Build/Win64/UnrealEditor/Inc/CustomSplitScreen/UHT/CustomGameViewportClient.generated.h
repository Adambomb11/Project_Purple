// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomGameViewportClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMSPLITSCREEN_CustomGameViewportClient_generated_h
#error "CustomGameViewportClient.generated.h already included, missing '#pragma once' in CustomGameViewportClient.h"
#endif
#define CUSTOMSPLITSCREEN_CustomGameViewportClient_generated_h

#define FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_SPARSE_DATA
#define FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateActiveSplitscreenType);


#define FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_ACCESSORS
#define FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomGameViewportClient(); \
	friend struct Z_Construct_UClass_UCustomGameViewportClient_Statics; \
public: \
	DECLARE_CLASS(UCustomGameViewportClient, UGameViewportClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomSplitScreen"), NO_API) \
	DECLARE_SERIALIZER(UCustomGameViewportClient)


#define FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGameViewportClient(UCustomGameViewportClient&&); \
	NO_API UCustomGameViewportClient(const UCustomGameViewportClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGameViewportClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGameViewportClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomGameViewportClient) \
	NO_API virtual ~UCustomGameViewportClient();


#define FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_28_PROLOG
#define FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_SPARSE_DATA \
	FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_ACCESSORS \
	FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_INCLASS_NO_PURE_DECLS \
	FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMSPLITSCREEN_API UClass* StaticClass<class UCustomGameViewportClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_Purple_Plugins_CustomSplitScreen_Source_CustomSplitScreen_Public_CustomGameViewportClient_h


#define FOREACH_ENUM_ECUSTOMSPLITSCREENTYPE(op) \
	op(ECustomSplitScreenType::None) \
	op(ECustomSplitScreenType::TwoPlayer) \
	op(ECustomSplitScreenType::SplitTypeCount) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
