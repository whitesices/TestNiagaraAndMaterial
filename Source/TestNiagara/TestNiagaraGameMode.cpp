// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestNiagaraGameMode.h"
#include "TestNiagaraCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestNiagaraGameMode::ATestNiagaraGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
