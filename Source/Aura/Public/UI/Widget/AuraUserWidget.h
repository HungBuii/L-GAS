// Copyright Hung ne

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AuraUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void SetWidgetController(UObject* InWidgetController);
	
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UObject> WidgetController;
	
protected:
	/* 
		BlueprintImplementableEvent: is a way to declare functions in C++ where the function body is implemented entirely within the Blueprint, 
									 without any C++ code for the function itself.
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void WidgetControllerSet();
};
