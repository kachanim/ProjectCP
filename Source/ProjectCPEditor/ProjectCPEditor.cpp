// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectCPEditor.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_GAME_MODULE(FProjectCPEditorModule, ProjectCPEditor);

DEFINE_LOG_CATEGORY(ProjectCPEditor)


FProjectCPEditorModule::FProjectCPEditorModule()
{

}

void FProjectCPEditorModule::StartupModule()
{
	UE_LOG(ProjectCPEditor, Log, TEXT("ProjectCPEditor: Log Started"));

	RegisterSettings();
}

void FProjectCPEditorModule::ShutdownModule()
{
	UnregisterSettings();

	UE_LOG(ProjectCPEditor, Log, TEXT("ProjectCPEditor: Log Ended"));
}


void FProjectCPEditorModule::RegisterSettings()
{
	
}

void FProjectCPEditorModule::UnregisterSettings()
{
	
}