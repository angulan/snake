// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "SnakeController.generated.h"

class UInputAction;
class UInputMappingContext;

UCLASS()
class SNAKERS_API ASnakeController : public APlayerController
{
	GENERATED_BODY()

public:
    ASnakeController();

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess))
    TObjectPtr<UInputMappingContext> moveContext;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    TObjectPtr<UInputAction> moveAction;

protected:
    virtual void SetupInputComponent() override;
    virtual void OnPossess(APawn* InPawn) override;

private:
    // Define the input action functions
    void Move(const FInputActionValue& Value);
};
