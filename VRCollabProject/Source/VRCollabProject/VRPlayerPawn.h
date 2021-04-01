// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupInterface.h"
#include "GameFramework/Pawn.h"
#include "VRPlayerPawn.generated.h"

class UCameraComponent;
class UMotionControllerComponent;
class USphereComponent;

UCLASS()
class VRCOLLABPROJECT_API AVRPlayerPawn : public APawn
{
	GENERATED_BODY()


public:
	// Sets default values for this pawn's properties
	AVRPlayerPawn();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;

	AActor* GetNearestOverlappingPickup(USphereComponent* _component);

	void OnGrabLeft();
	void OnGrabRight();
	void OnReleaseLeft();
	void OnReleaseRight();

	void Strafe(float _value);
	void MoveFB(float _value);

	UPROPERTY(VisibleAnywhere)
	bool bShowDebugInfo = true;

	UPROPERTY(VisibleAnywhere)
	float playerMovementSpeed = 140.0f;

	IPickupInterface* leftAttachedPickup;

	IPickupInterface* rightAttachedPickup;

#pragma region Components
protected:
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* cameraComponent;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* leftGrabSphere;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* rightGrabSphere;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* leftMesh;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* rightMesh;

	UPROPERTY(VisibleAnywhere)
	UMotionControllerComponent* leftMotionController;

	UPROPERTY(VisibleAnywhere)
	UMotionControllerComponent* rightMotionController;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* rootSceneComponent;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* VROffset;

#pragma endregion

};
