// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "TankPawn.h"
#include "Tower.h"


void ATower::BeginPlay()
{
	Super::BeginPlay();

	Tank = Cast<ATankPawn>(UGameplayStatics::GetPlayerPawn(this, 0));

	GetWorldTimerManager().SetTimer(FireRateTimerHandle, this, &ATower::CheckFireCondition, FireRate, true);
}

void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Tank)
	{
		float Distance = FVector::Dist(GetActorLocation(), Tank->GetActorLocation());

		if (Distance <= FireRange)
		{
			RotateTurret(Tank->GetActorLocation());
		}
	}

}

void ATower::CheckFireCondition()
{
	if (Tank)
	{
		float Distance = FVector::Dist(GetActorLocation(), Tank->GetActorLocation());
		
		if (Distance <= FireRange)
		{
			Fire();
		}
	}
}