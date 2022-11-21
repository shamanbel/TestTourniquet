


#include "TourniquetTest/Player/TT_Character.h"


ATT_Character::ATT_Character()
{
 	
	PrimaryActorTick.bCanEverTick = false;

}


void ATT_Character::BeginPlay()
{
	Super::BeginPlay();
	
}


void ATT_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

