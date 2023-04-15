// Copyright Epic Games, Inc. All Rights Reserved.

#include "Punal_Shaders.h"

#define LOCTEXT_NAMESPACE "FPunal_ShadersModule"

void FPunal_ShadersModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FString ShaderDir = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("Punal_Shaders/Shaders"));
	AddShaderSourceDirectoryMapping("/Plugin/Punal_Shaders", ShaderDir);

	FString ProjectShaderDir = FPaths::Combine(FPaths::ProjectDir(), TEXT("/Shaders"));
	AddShaderSourceDirectoryMapping("/Project/Shaders", ProjectShaderDir);
}

void FPunal_ShadersModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}
  
#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPunal_ShadersModule, Punal_Shaders)