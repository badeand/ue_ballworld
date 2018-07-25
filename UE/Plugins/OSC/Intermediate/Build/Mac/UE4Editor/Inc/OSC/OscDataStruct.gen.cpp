// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/OscPrivatePCH.h"
#include "Private/Common/OscDataStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscDataStruct() {}
// Cross Module References
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscDataStruct();
	UPackage* Z_Construct_UPackage__Script_OSC();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct();
// End Cross Module References
class UScriptStruct* FOscDataStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OSC_API uint32 Get_Z_Construct_UScriptStruct_FOscDataStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOscDataStruct, Z_Construct_UPackage__Script_OSC(), TEXT("OscDataStruct"), sizeof(FOscDataStruct), Get_Z_Construct_UScriptStruct_FOscDataStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOscDataStruct(FOscDataStruct::StaticStruct, TEXT("/Script/OSC"), TEXT("OscDataStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OSC_StaticRegisterNativesFOscDataStruct
{
	FScriptStruct_OSC_StaticRegisterNativesFOscDataStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OscDataStruct")),new UScriptStruct::TCppStructOps<FOscDataStruct>);
	}
} ScriptStruct_OSC_StaticRegisterNativesFOscDataStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FOscDataStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOscDataStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OSC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OscDataStruct"), sizeof(FOscDataStruct), Get_Z_Construct_UScriptStruct_FOscDataStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Common/OscDataStruct.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOscDataStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Queue_MetaData[] = {
				{ "ModuleRelativePath", "Private/Common/OscDataStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Queue = { UE4CodeGen_Private::EPropertyClass::Array, "Queue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FOscDataStruct, Queue), METADATA_PARAMS(NewProp_Queue_MetaData, ARRAY_COUNT(NewProp_Queue_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Queue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Queue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
				{ "ModuleRelativePath", "Private/Common/OscDataStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FOscDataStruct, Index), METADATA_PARAMS(NewProp_Index_MetaData, ARRAY_COUNT(NewProp_Index_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Queue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Queue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_OSC,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"OscDataStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FOscDataStruct),
				alignof(FOscDataStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOscDataStruct_CRC() { return 1773877340U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
