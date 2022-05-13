// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "TankPawn.h"
#include "Tower.h"

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	Tank = Cast<ATankPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
}

void AMyGameModeBase::ActorDied(AActor* DeadActor)
{
	if (DeadActor == Tank)
	{
		Tank->HandleDestruction();

		if (Tank->GetTankPlayerController())
		{
			Tank->DisableInput(Tank->GetTankPlayerController());
			
		}
	}
	else if (ATower* DestroyedTower = Cast<ATower>(DeadActor))
	{
		DestroyedTower->HandleDestruction();
	}
}