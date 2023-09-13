// Copyright © 2021++ Ready Player Me

#pragma once

#include "CoreMinimal.h"
#include "ReadyPlayerMeEditorTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReadyPlayerMeEditorFunctionLibrary.generated.h"

UCLASS()
class READYPLAYERMEEDITOR_API UReadyPlayerMeEditorFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Ready Player Me", meta = (DisplayName = "Set Subdomain"))
	static void SetSubdomain(const FString& Subdomain);

	UFUNCTION(BlueprintCallable, Category = "Ready Player Me", meta = (DisplayName = "Enable Analytics"))
	static void EnableAnalytics();

	UFUNCTION(BlueprintCallable, Category = "Ready Player Me", meta = (DisplayName = "Set Setup Guide Shown"))
	static void SetSetupGuideShown();

	UFUNCTION(BlueprintCallable, Category = "Ready Player Me", meta = (DisplayName = "Was Setup Guide Shown"))
	static bool WasSetupGuideShown();

	UFUNCTION(BlueprintCallable, Category = "Ready Player Me", meta = (DisplayName = "Log Rpm Event"))
	static void LogRpmEvent(ERpmAnalyticsEventType EventType);

	UFUNCTION(BlueprintCallable, Category = "Ready Player Me", meta = (DisplayName = "Close Editor Widget"))
	static void CloseEditorWidget(const FString& Name);
};