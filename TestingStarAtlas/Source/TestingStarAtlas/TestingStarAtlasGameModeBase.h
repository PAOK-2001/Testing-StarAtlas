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
	void TestSub(const FString& PubKey);
	UFUNCTION(Exec)
	void TestUnsub(const int ID);
	UFUNCTION(Exec)
	void GetAccountBalance(const int ID);
	UFUNCTION(Exec)
	void TrackTransaction(const FString& Signature);
	UFUNCTION(Exec)
	void GetErr(int ID);
	
};
