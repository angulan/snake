// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "snakers/ATailActor.h"
#include "snakers/Snake.h"

#include "GameData.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class SNAKERS_API UGameData : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGameData();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	TArray<FVector> OccupiedPositions;

	UFUNCTION(BlueprintImplementableEvent, Category = "MapGenerationFunction")
	void GenerateMap();

	FVector GetRandomPosition(bool includeOccupied);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEatApple);
	UPROPERTY(BlueprintAssignable)
	FOnEatApple OnEatApple;

	UFUNCTION(BlueprintImplementableEvent, Category = "SnakeFunctions")
	void GameOverPart2();
	
	UFUNCTION()
	void MoveApple();

	UFUNCTION(BlueprintCallable, Category = "SnakeFunctions")
	virtual void DataSetup();

	UFUNCTION(BlueprintCallable, Category = "SnakeFunctions")
	virtual void DestroyPlayer2();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	TArray<ASnake*> snakes;
	
	float t = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	int CurrentState = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	int SelectedGameMode = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	TArray<FVector> OccupiedWalls;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	bool IsGameOver = false;
	
private:

	void SetMovement(FVector direction);
	ATailActor* Apple;

	int SnakeSpeed = 5;
	
	// Called to bind functionality to input
	void GameOver();

	void CheckIfCollision(FVector pos);

	TArray<ATailActor*> debugspheres;
	
};
