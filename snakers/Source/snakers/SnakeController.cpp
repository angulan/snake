#include "SnakeController.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "GameFramework/Pawn.h"
#include "Snake.h"  // Include your Snake class

ASnakeController::ASnakeController()
{
}

void ASnakeController::SetupInputComponent()
{
    Super::SetupInputComponent();

    TObjectPtr<UEnhancedInputComponent> EnhancedInputComponent
    = Cast<UEnhancedInputComponent>(this->InputComponent);

    if (EnhancedInputComponent)
    {
        EnhancedInputComponent->BindAction(moveAction.Get(),
            ETriggerEvent::Triggered, this, &ASnakeController::Move);
    }
}

void ASnakeController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);
}

void ASnakeController::Move(const FInputActionValue& Value)
{
    
}
