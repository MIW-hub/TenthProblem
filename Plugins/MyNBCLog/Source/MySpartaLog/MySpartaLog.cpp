#include  "MySpartaLog.h"


void FMySpartaLog::StartupModule()
{

	UE_LOG(LogTemp, Warning, TEXT("MySpartaLog Module Started!"));\
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("MySpartaLog Module Started!"));
	}
}

void FMySpartaLog::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("MySpartaLog Module Ended!"));
}

IMPLEMENT_MODULE(FMySpartaLog, MySpartaLog);