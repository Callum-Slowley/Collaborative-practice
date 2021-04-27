// Fill out your copyright notice in the Description page of Project Settings.


#include "SceneChangeTriggerReciever.h"

// Sets default values
ASceneChangeTriggerReciever::ASceneChangeTriggerReciever()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASceneChangeTriggerReciever::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASceneChangeTriggerReciever::StartChangeTimer()
{
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 3.0f, FColor::Red, FString::Printf(TEXT("Started")));
	counting = true;
}

void ASceneChangeTriggerReciever::StopChangeTimer()
{
	counting = false;
	currentTime = 0.0f;
}

// Called every frame
void ASceneChangeTriggerReciever::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (counting) {
		currentTime += DeltaTime;
		if (currentTime >= requiredTime && targetLevelName != "") {
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(INDEX_NONE, 3.0f, FColor::Red, FString::Printf(TEXT("Switching Level")));
			}
			UWorld* world = GetWorld();
			UGameplayStatics::OpenLevel(GetWorld(), targetLevelName);
		}
	}
}

// Called to bind functionality to input
void ASceneChangeTriggerReciever::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("MotionA", EInputEvent::IE_Pressed, this, &ASceneChangeTriggerReciever::StartChangeTimer);
	PlayerInputComponent->BindAction("MotionA", EInputEvent::IE_Released, this, &ASceneChangeTriggerReciever::StopChangeTimer);
	PlayerInputComponent->BindAction("DebugButton", EInputEvent::IE_Pressed, this, &ASceneChangeTriggerReciever::StartChangeTimer);
	PlayerInputComponent->BindAction("DebugButton", EInputEvent::IE_Released, this, &ASceneChangeTriggerReciever::StopChangeTimer);
}

