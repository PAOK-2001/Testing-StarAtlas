// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestingStarAtlasGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGSTARATLAS_API ATestingStarAtlasGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	UFUNCTION(Exec)
	void testSub(const FString& pubKey);
	UFUNCTION(Exec)
	void testUnsub(const int ID);
	UFUNCTION(Exec)
	void getAccountBalance(const int ID);
};
