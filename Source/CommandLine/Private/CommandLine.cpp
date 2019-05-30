// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CommandLine.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"

//#include "NodeCmd.h"

#define LOCTEXT_NAMESPACE "FCommandLine"

void FCommandLineModule::StartupModule()
{
	Cmd = MakeShareable(new FNodeCmd());
	FString Script = TEXT("hello.js");
	UE_LOG(LogTemp, Log, TEXT("ScriptStart"));
	Cmd->RunScript(Script);
	UE_LOG(LogTemp, Log, TEXT("ScriptEnd"));
}

void FCommandLineModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCommandLineModule, CommandLine)