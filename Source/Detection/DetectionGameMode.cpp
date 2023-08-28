// Copyright Epic Games, Inc. All Rights Reserved.

#include "DetectionGameMode.h"
#include "DetectionCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADetectionGameMode::ADetectionGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
