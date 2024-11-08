// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorSaltador.h"
#include "Decorator_DonkeyKongCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ADecoradorSaltador::ADecoradorSaltador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecoradorSaltador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecoradorSaltador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecoradorSaltador::setCorrer(float _correr)
{
	//correr = Super::getCorrer() + _correr;
	//Jugador->setCorrer(correr);
	Super::setCorrer(Super::getCorrer() + _correr);
}

void ADecoradorSaltador::setSaltar(float _salto)
{
	//saltar = Super::getSaltar() + _salto;
	//Jugador->setSaltar(saltar);
	Super::setSaltar(Super::getSaltar() + _salto);
}

float ADecoradorSaltador::getCorrer()
{
	return Super::getCorrer();
}

float ADecoradorSaltador::getSaltar()
{
	return Super::getSaltar();
}