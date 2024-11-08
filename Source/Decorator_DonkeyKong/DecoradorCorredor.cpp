// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorCorredor.h"
#include "Decorator_DonkeyKongCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ADecoradorCorredor::ADecoradorCorredor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecoradorCorredor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecoradorCorredor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecoradorCorredor::setCorrer(float _correr)
{
	//correr = getCorrer() + _correr;
	//Jugador->setCorrer(correr);
	Super::setCorrer(Super::getCorrer() + _correr);
}

void ADecoradorCorredor::setSaltar(float _salto)
{
	//saltar = getSaltar() + _salto;
	//Jugador->setSaltar(correr);
	Super::setSaltar(Super::getSaltar() + _salto);
}

float ADecoradorCorredor::getCorrer()
{
	return Super::getCorrer();
}

float ADecoradorCorredor::getSaltar()
{
	return Super::getSaltar();
}

