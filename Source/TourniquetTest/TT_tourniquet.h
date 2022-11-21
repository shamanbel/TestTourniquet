

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "TT_tourniquet.generated.h"

UCLASS()
class TOURNIQUETTEST_API ATT_tourniquet : public AActor
{
	GENERATED_BODY()

public:

	ATT_tourniquet();


protected:
	
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere)
	USceneComponent* DefaultRoot = nullptr;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tourniquet")
	UStaticMeshComponent* TourniquetMesh = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tourniquet")
	UBoxComponent* BoxCollision = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Tourniquet", meta = (ClampMin = "1", ClampMax = "2"))
	int ID_Tourniquet = 0;


};
