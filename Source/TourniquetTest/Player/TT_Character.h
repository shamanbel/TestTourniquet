

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <TourniquetTest/TT_BasePickUp.h>
#include "TT_Character.generated.h"

UCLASS()
class TOURNIQUETTEST_API ATT_Character : public ACharacter
{
	GENERATED_BODY()

public:
	
	ATT_Character();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY()
	TSubclassOf<ATT_BasePickUp> PickUP;

protected:

	virtual void BeginPlay() override;



	

};
