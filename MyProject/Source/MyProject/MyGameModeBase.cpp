// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPlayerController.h"
#include "Kismet/GameplayStatics.h"

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	PlayerController->SetPlayerEnabledState(true);
}