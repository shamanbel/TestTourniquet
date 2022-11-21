


#include "TT_tourniquet.h"
#include <Components/StaticMeshComponent.h>



ATT_tourniquet::ATT_tourniquet()
{

	PrimaryActorTick.bCanEverTick = false;
	DefaultRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
	SetRootComponent(DefaultRoot);
	
	TourniquetMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	TourniquetMesh -> SetupAttachment(DefaultRoot);
	
	BoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxCollision");
	BoxCollision -> SetupAttachment(DefaultRoot);
}


void ATT_tourniquet::BeginPlay()
{
	Super::BeginPlay();
	
}

