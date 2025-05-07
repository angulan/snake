// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ATailActor.h"
#include "GameFramework/Pawn.h"
#include "SnakeController.h"
#include "InputActionValue.h"
#include "Snake.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class SNAKERS_API ASnake : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASnake();
	void SetMovement(FVector direction);

	void MoveHorizontal(const FInputActionValue& Value);
	void MoveVertical(const FInputActionValue& Value);

	void MoveSecondaryHorizontal(const FInputActionValue& Value);
	void MoveSecondaryVertical(const FInputActionValue& Value);

	void SnakeSetup();

	void PositionSnap();

	void AiInput(FVector AppleTile, TArray<FVector> occupiedTiles);

	void NewTick(float t);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* IA_Horizontal;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* IA_Vertical;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* IA_Secondary_Horizontal;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* IA_Secondary_Vertical;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	TArray<ATailActor*> Tail;

	ASnake* SecondSnake;
	bool ControlSelf = true;
	bool ControlSecond = true;
	
	float Length = 3;

	bool collision = false;
	
	bool InitialInput = true;

	UMaterialInterface* HeadMaterial;
	UMaterialInterface* TailMaterial;
private:

	FVector Direction = FVector(0, 0, 0);
	FVector LastDirection = FVector(0, 0, 0);

	FVector StartTile = FVector(0, 0, 0);
	FVector TargetTile = FVector(0, 0, 0);
	
	TArray<FVector> TailStarts;
	TArray<FVector> TailTargets;
	
	FVector InitialLocation;
};
