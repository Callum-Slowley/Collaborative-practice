#include "VRPlayerPawn.h"

#include "Camera/CameraComponent.h"
#include "VRStatics.h"
#include "MotionControllerComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AVRPlayerPawn::AVRPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	rootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
	SetRootComponent(rootSceneComponent);

	VROffset = CreateDefaultSubobject<USceneComponent>(TEXT("VROffset"));
	VROffset->SetupAttachment(GetRootComponent());

	cameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	cameraComponent->SetupAttachment(VROffset);

	leftMotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftMotionController"));
	leftMotionController->SetupAttachment(VROffset);
	leftMotionController->MotionSource = FName("Left");
	leftMotionController->SetCollisionProfileName("NoCollision");
	leftMotionController->SetGenerateOverlapEvents(false);

	leftMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LeftMesh"));
	leftMesh->SetupAttachment(leftMotionController);
	leftMesh->SetCastShadow(false);

	leftGrabSphere = CreateDefaultSubobject<USphereComponent>(TEXT("LeftGrabSphere"));
	leftGrabSphere->SetupAttachment(leftMesh);
	leftGrabSphere->SetSphereRadius(7.0f);
	leftGrabSphere->ShapeColor = FColor::Blue;
	leftGrabSphere->SetCollisionObjectType(ECC_WorldDynamic);
	leftGrabSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	leftGrabSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	leftGrabSphere->SetCollisionResponseToChannel(ECC_Handle, ECR_Overlap);

	rightMotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightMotionController"));
	rightMotionController->SetupAttachment(VROffset);
	rightMotionController->MotionSource = FName("Right");
	rightMotionController->SetCollisionProfileName("NoCollision");
	rightMotionController->SetGenerateOverlapEvents(false);

	rightMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RightMesh"));
	rightMesh->SetupAttachment(rightMotionController);
	rightMesh->SetCastShadow(false);

	rightGrabSphere = CreateDefaultSubobject<USphereComponent>(TEXT("RightGrabSphere"));
	rightGrabSphere->SetupAttachment(rightMesh);
	rightGrabSphere->SetSphereRadius(7.0f);
	rightGrabSphere->ShapeColor = FColor::Red;
	rightGrabSphere->SetCollisionObjectType(ECC_WorldDynamic);
	rightGrabSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	rightGrabSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	rightGrabSphere->SetCollisionResponseToChannel(ECC_Handle, ECR_Overlap);
}

void AVRPlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	if (bShowDebugInfo) {
		leftGrabSphere->SetHiddenInGame(false);
		rightGrabSphere->SetHiddenInGame(false);
	}
}

AActor* AVRPlayerPawn::GetNearestOverlappingPickup(USphereComponent* _component)
{
	AActor* nearestPickup = nullptr;
	TArray<AActor*> overlappingActors;
	_component->GetOverlappingActors(overlappingActors);
	float shortestdistance = TNumericLimits<float>::Max();
	for (AActor* actor : overlappingActors) {
		if (actor->GetClass()->ImplementsInterface(UPickupInterface::StaticClass())) {
			const float distance = FVector::Dist(_component->GetComponentLocation(), actor->GetActorLocation());
			if (distance < shortestdistance) {
				shortestdistance = distance;
				nearestPickup = actor;
			}
		}
	}
	return nearestPickup;
}

void AVRPlayerPawn::OnGrabLeft()
{
	if (bShowDebugInfo) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(INDEX_NONE, 3.0f, FColor::Red, FString::Printf(TEXT("OnGrabLeft")));
		}
	}
	AActor* nearestPickup = GetNearestOverlappingPickup(leftGrabSphere);

	leftAttachedPickup = Cast<IPickupInterface>(nearestPickup);
	if (leftAttachedPickup != nullptr) {
		leftAttachedPickup->GrabPressed(leftGrabSphere);

		if (leftAttachedPickup == rightAttachedPickup) {
			rightAttachedPickup = nullptr;
		}
	}
}

void AVRPlayerPawn::OnGrabRight()
{
	if (bShowDebugInfo) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(INDEX_NONE, 3.0f, FColor::Red, FString::Printf(TEXT("OnGrabRight")));
		}
	}
	AActor* nearestPickup = GetNearestOverlappingPickup(rightGrabSphere);

	rightAttachedPickup = Cast<IPickupInterface>(nearestPickup);
	if (rightAttachedPickup != nullptr) {
		rightAttachedPickup->GrabPressed(rightGrabSphere);

		if (rightAttachedPickup == leftAttachedPickup) {
			leftAttachedPickup = nullptr;
		}
	}
}

void AVRPlayerPawn::OnReleaseLeft()
{
	if (bShowDebugInfo) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(INDEX_NONE, 3.0f, FColor::Red, FString::Printf(TEXT("OnReleaseLeft")));
		}
	}
	if (leftAttachedPickup != nullptr) {
		leftAttachedPickup->GrabReleased();
		leftAttachedPickup = nullptr;
	}
}

void AVRPlayerPawn::OnReleaseRight()
{
	if (bShowDebugInfo) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(INDEX_NONE, 3.0f, FColor::Red, FString::Printf(TEXT("OnReleaseRight")));
		}
	}
	if (rightAttachedPickup != nullptr) {
		rightAttachedPickup->GrabReleased();
		rightAttachedPickup = nullptr;
	}
}

void AVRPlayerPawn::Strafe(float _value)
{
	//Only need to execute this if the player has actually moved the sticks
	if (_value != 0.0f) {
		//Get the players head direction (NOTE: Will need to add controller tracked forward direction for the wierdos that like it)
		FMinimalViewInfo view;
		cameraComponent->GetCameraView(1.0f, view);

		//Get out an Rotator so we can use it as the forward direction of the player
		FRotator forwardDirection = view.Rotation;
		forwardDirection.Pitch = 0.0f;

		//Create the movement to be added to the player's root component
		FVector moveDirection = FRotationMatrix(forwardDirection).GetScaledAxis(EAxis::Y);
		SetActorLocation(GetActorLocation() + moveDirection * _value * playerMovementSpeed * FApp::GetDeltaTime());
	}
}

void AVRPlayerPawn::MoveFB(float _value)
{
	//Only need to execute this if the player has actually moved the sticks
	if (_value != 0.0f) {
		//Get the players head direction (NOTE: Will need to add controller tracked forward direction for the wierdos that like it)
		FMinimalViewInfo view;
		cameraComponent->GetCameraView(1.0f, view);

		//Get out an Rotator so we can use it as the forward direction of the player
		FRotator forwardDirection = view.Rotation;
		forwardDirection.Pitch = 0.0f;

		//Create the movement to be added to the player's root component
		FVector moveDirection = FRotationMatrix(forwardDirection).GetScaledAxis(EAxis::X);
		SetActorLocation(GetActorLocation() + moveDirection * _value  *playerMovementSpeed * FApp::GetDeltaTime());
	}
}


// Called to bind functionality to input
void AVRPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Binding VR specific triggers
	PlayerInputComponent->BindAction("GrabLeft", EInputEvent::IE_Pressed, this, &AVRPlayerPawn::OnGrabLeft);
	PlayerInputComponent->BindAction("GrabRight", EInputEvent::IE_Pressed, this, &AVRPlayerPawn::OnGrabRight);
	PlayerInputComponent->BindAction("GrabLeft", EInputEvent::IE_Released, this, &AVRPlayerPawn::OnReleaseLeft);
	PlayerInputComponent->BindAction("GrabRight", EInputEvent::IE_Released, this, &AVRPlayerPawn::OnReleaseRight);

	//Binding face buttons

	//Binding sticks
	PlayerInputComponent->BindAxis("LeftStickHor", this, &AVRPlayerPawn::Strafe);
	PlayerInputComponent->BindAxis("LeftStickVer", this, &AVRPlayerPawn::MoveFB);
}


