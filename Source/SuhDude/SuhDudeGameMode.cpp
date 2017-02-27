// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "SuhDude.h"
#include "SuhDudeGameMode.h"
#include "SuhDudeCharacter.h"

ASuhDudeGameMode::ASuhDudeGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = ASuhDudeCharacter::StaticClass();	
}
