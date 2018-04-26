// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPSteamGroupOfficer;
class UObject;
struct FBPUniqueNetId;
class USteamRequestGroupOfficersCallbackProxy;
#ifdef ADVANCEDSTEAMSESSIONS_SteamRequestGroupOfficersCallbackProxy_generated_h
#error "SteamRequestGroupOfficersCallbackProxy.generated.h already included, missing '#pragma once' in SteamRequestGroupOfficersCallbackProxy.h"
#endif
#define ADVANCEDSTEAMSESSIONS_SteamRequestGroupOfficersCallbackProxy_generated_h

#define MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_49_GENERATED_BODY \
	friend ADVANCEDSTEAMSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupOfficer(); \
	ADVANCEDSTEAMSESSIONS_API static class UScriptStruct* StaticStruct();


#define MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_61_DELEGATE \
struct _Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms \
{ \
	TArray<FBPSteamGroupOfficer> OfficerList; \
}; \
static inline void FBlueprintGroupOfficerDetailsDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGroupOfficerDetailsDelegate, TArray<FBPSteamGroupOfficer> const& OfficerList) \
{ \
	_Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms Parms; \
	Parms.OfficerList=OfficerList; \
	BlueprintGroupOfficerDetailsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSteamGroupOfficerList) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_GroupUniqueNetID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USteamRequestGroupOfficersCallbackProxy**)Z_Param__Result=USteamRequestGroupOfficersCallbackProxy::GetSteamGroupOfficerList(Z_Param_WorldContextObject,Z_Param_GroupUniqueNetID); \
		P_NATIVE_END; \
	}


#define MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSteamGroupOfficerList) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_GroupUniqueNetID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USteamRequestGroupOfficersCallbackProxy**)Z_Param__Result=USteamRequestGroupOfficersCallbackProxy::GetSteamGroupOfficerList(Z_Param_WorldContextObject,Z_Param_GroupUniqueNetID); \
		P_NATIVE_END; \
	}


#define MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamRequestGroupOfficersCallbackProxy(); \
	friend ADVANCEDSTEAMSESSIONS_API class UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy(); \
public: \
	DECLARE_CLASS(USteamRequestGroupOfficersCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSteamSessions"), ADVANCEDSTEAMSESSIONS_API) \
	DECLARE_SERIALIZER(USteamRequestGroupOfficersCallbackProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUSteamRequestGroupOfficersCallbackProxy(); \
	friend ADVANCEDSTEAMSESSIONS_API class UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy(); \
public: \
	DECLARE_CLASS(USteamRequestGroupOfficersCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSteamSessions"), ADVANCEDSTEAMSESSIONS_API) \
	DECLARE_SERIALIZER(USteamRequestGroupOfficersCallbackProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSTEAMSESSIONS_API USteamRequestGroupOfficersCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamRequestGroupOfficersCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSTEAMSESSIONS_API, USteamRequestGroupOfficersCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamRequestGroupOfficersCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSTEAMSESSIONS_API USteamRequestGroupOfficersCallbackProxy(USteamRequestGroupOfficersCallbackProxy&&); \
	ADVANCEDSTEAMSESSIONS_API USteamRequestGroupOfficersCallbackProxy(const USteamRequestGroupOfficersCallbackProxy&); \
public:


#define MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSTEAMSESSIONS_API USteamRequestGroupOfficersCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSTEAMSESSIONS_API USteamRequestGroupOfficersCallbackProxy(USteamRequestGroupOfficersCallbackProxy&&); \
	ADVANCEDSTEAMSESSIONS_API USteamRequestGroupOfficersCallbackProxy(const USteamRequestGroupOfficersCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSTEAMSESSIONS_API, USteamRequestGroupOfficersCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamRequestGroupOfficersCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamRequestGroupOfficersCallbackProxy)


#define MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_63_PROLOG
#define MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_RPC_WRAPPERS \
	MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_INCLASS \
	MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_66_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SteamRequestGroupOfficersCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
