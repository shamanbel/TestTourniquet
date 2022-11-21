


#include "TT_BasePickUp.h"
#include <Components/SphereComponent.h>
#include <Components/StaticMeshComponent.h>



ATT_BasePickUp::ATT_BasePickUp()
{

	PrimaryActorTick.bCanEverTick = false;

	PickUPMesh = CreateDefaultSubobject<UStaticMeshComponent>("PickUPMesh");
	PickUPMesh ->SetupAttachment(RootComponent);
	
	
	SphereInteraction = CreateDefaultSubobject<USphereComponent>("SphereInteraction");
	SphereInteraction->SetupAttachment(PickUPMesh);
	SphereInteraction->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

	
}

void ATT_BasePickUp::BeginPlay()
{
	Super::BeginPlay();
	
}


void ATT_BasePickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

