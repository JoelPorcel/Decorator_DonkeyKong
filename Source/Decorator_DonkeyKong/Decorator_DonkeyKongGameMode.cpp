// Copyright Epic Games, Inc. All Rights Reserved.

#include "Decorator_DonkeyKongGameMode.h"
#include "Decorator_DonkeyKongCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "DecoradorCorredor.h"
#include "DecoradorSaltador.h"

ADecorator_DonkeyKongGameMode::ADecorator_DonkeyKongGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ADecorator_DonkeyKongGameMode::BeginPlay()
{
	Super::BeginPlay();
	APawn* mario = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	ADecoradorCorredor* corredor = GetWorld()->SpawnActor<ADecoradorCorredor>(ADecoradorCorredor::StaticClass());
	ADecoradorSaltador* saltador = GetWorld()->SpawnActor<ADecoradorSaltador>(ADecoradorSaltador::StaticClass());
	corredor->setJugador(mario);
	Jugador = corredor;
	Jugador->setCorrer(1500);
	saltador->setJugador(corredor);
	Jugador = saltador;
	Jugador->setSaltar(1500);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Velocidad con decorador: %f"), Jugador->getCorrer()));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Salto con decorador: %f"), Jugador->getSaltar()));
}

void ADecorator_DonkeyKongGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
