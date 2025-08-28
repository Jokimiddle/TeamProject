// Fill out your copyright notice in the Description page of Project Settings.


#include "NewActor.h"

// Sets default values
ANewActor::ANewActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ANewActor::BeginPlay()
{
	Super::BeginPlay();

<<<<<<< HEAD
	UE_LOG(LogTemp, Log, TEXT("is Mine!"));
=======
	UE_LOG(LogTemp, Log, TEXT("Written by other@#$%@#$#@#&$"));
>>>>>>> 9cff336e32da1c29f22476ca04e2e10e7616e593
}
