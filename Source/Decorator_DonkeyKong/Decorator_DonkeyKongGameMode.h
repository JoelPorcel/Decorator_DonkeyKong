// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "IJugador.h"
#include "Decorator_DonkeyKongGameMode.generated.h"

UCLASS(minimalapi)
class ADecorator_DonkeyKongGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADecorator_DonkeyKongGameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	IIJugador* Jugador;
};



