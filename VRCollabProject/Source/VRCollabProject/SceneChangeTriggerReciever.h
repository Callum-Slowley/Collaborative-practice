// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "SceneChangeTriggerReciever.generated.h"


UCLASS()
class VRCOLLABPROJECT_API ASceneChangeTriggerReciever : public APawn
{
	GENERATED_BODY()


public:
	// Sets default values for this pawn's properties
	ASceneChangeTriggerReciever();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName targetLevelName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float requiredTime = 1.5f;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void StartChangeTimer();
	void StopChangeTimer();

	bool counting = false;
	float currentTime = 0.0f;
};
