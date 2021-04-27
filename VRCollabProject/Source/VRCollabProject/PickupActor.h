#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupInterface.h"
#include "PickupActor.generated.h"

UCLASS()
class VRCOLLABPROJECT_API APickupActor : public AActor, public IPickupInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupActor();

	virtual void GrabPressed(USceneComponent* _attachPoint) override;
	virtual void GrabReleased() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool snapOnGrab = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool canDropOnRelease = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FQuat snapRotation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector snapLocation;

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* staticMeshComponent;
};
