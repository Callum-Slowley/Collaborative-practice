#include "PickupActor.h"
#include "VRStatics.h"

// Sets default values
APickupActor::APickupActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	staticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	SetRootComponent(staticMeshComponent);
	staticMeshComponent->SetCollisionObjectType(ECC_Handle);
	staticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	staticMeshComponent->SetGenerateOverlapEvents(true);
	staticMeshComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	staticMeshComponent->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	staticMeshComponent->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	staticMeshComponent->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Overlap);
	staticMeshComponent->SetCollisionResponseToChannel(ECC_Handle, ECR_Block);
	staticMeshComponent->SetSimulatePhysics(true);
}

void APickupActor::GrabPressed(USceneComponent* _attachPoint)
{
	staticMeshComponent->SetSimulatePhysics(false);
	staticMeshComponent->AttachToComponent(_attachPoint, FAttachmentTransformRules::KeepWorldTransform);
	if (snapOnGrab) {
		staticMeshComponent->SetRelativeRotation(snapRotation);
		staticMeshComponent->SetRelativeLocation(snapLocation);
	}
}

void APickupActor::GrabReleased()
{
	if (canDropOnRelease) {
		staticMeshComponent->SetSimulatePhysics(true);
	}
}
