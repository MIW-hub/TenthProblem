// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"
#include "MySpartaLog/MySpartaLog.h"


ATestActor::ATestActor()
{
	
}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	FMySpartaLog& SpartaLog = FModuleManager::LoadModuleChecked<FMySpartaLog>(TEXT("MySpartaLog"));
	SpartaLog.StartupModule();
	
}

void ATestActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	FMySpartaLog& SpartaLog = FModuleManager::LoadModuleChecked<FMySpartaLog>(TEXT("MySpartaLog"));
	SpartaLog.ShutdownModule();	
}





