// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectCPEditor.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_GAME_MODULE(FProjectCPEditorModule, ProjectCPEditor);

DEFINE_LOG_CATEGORY(LogProjectCPEditor)

FProjectCPEditorModule::FProjectCPEditorModule()
{

}

void FProjectCPEditorModule::StartupModule()
{
	//UE_LOG(ProjectCPEditor, Log, TEXT("ProjectCPEditor: Log Started"));

	RegisterSettings();
}

void FProjectCPEditorModule::ShutdownModule()
{
	UnregisterSettings();

	//UE_LOG(ProjectCPEditor, Log, TEXT("ProjectCPEditor: Log Ended"));
}


void FProjectCPEditorModule::RegisterSettings()
{
	// Registering some settings is just a matter of exposing the default UObject of
	// your desired class, feel free to add here all those settings you want to expose
	// to your LDs or artists.
}

void FProjectCPEditorModule::UnregisterSettings()
{
	// Ensure to unregister all of your registered settings here, hot-reload would
	// otherwise yield unexpected results.
}