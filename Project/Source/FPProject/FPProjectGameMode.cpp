// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPProjectGameMode.h"
#include "FPProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPProjectGameMode::AFPProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
