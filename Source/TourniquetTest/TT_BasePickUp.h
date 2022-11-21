

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TT_BasePickUp.generated.h"

class USphereComponent;

UCLASS()
class TOURNIQUETTEST_API ATT_BasePickUp : public AActor
{
	GENERATED_BODY()

public:

	ATT_BasePickUp();

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="PickUp")
	UStaticMeshComponent* PickUPMesh = nullptr;
	
	UPROPERTY(VisibleAnywhere, Category = "PickUp")
	USphereComponent* SphereInteraction = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PickUp", meta = (ClampMin = "1", ClampMax = "2"))
	int ID_Key = 1;

public:

	virtual void Tick(float DeltaTime) override;
};
