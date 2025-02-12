#include "SpartaGameMode.h"
#include "CustomPawn.h"
#include "SpartaPlayerController.h" // PlayerController 클래스를 사용

ASpartaGameMode::ASpartaGameMode()
{
	DefaultPawnClass = ACustomPawn::StaticClass();
	PlayerControllerClass = ASpartaPlayerController::StaticClass();
}