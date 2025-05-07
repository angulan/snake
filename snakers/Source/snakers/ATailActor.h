// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ATailActor.generated.h"

UCLASS()
class SNAKERS_API ATailActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATailActor();
	void OnTriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	                    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* SphereComponent;
};
