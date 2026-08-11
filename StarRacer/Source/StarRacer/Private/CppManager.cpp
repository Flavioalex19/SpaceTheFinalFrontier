// Fill out your copyright notice in the Description page of Project Settings.


#include "CppManager.h"

// Sets default values
ACppManager::ACppManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACppManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

