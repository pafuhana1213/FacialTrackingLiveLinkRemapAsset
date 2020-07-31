// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LiveLinkRemapAsset.h"
#include "FacialTrackingLiveLinkRemapAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class FACEARSAMPLE_API UFacialTrackingLiveLinkRemapAsset : public ULiveLinkRemapAsset
{
	GENERATED_BODY()
	
public:
	UFacialTrackingLiveLinkRemapAsset(const FObjectInitializer& ObjectInitializer);


	UPROPERTY(EditAnywhere, Category = "LiveLink")
	TMap<FName, FName> AppleARKitBlendShapeNamesToMeshCurveNames;

	FName GetRemappedCurveName_Implementation(FName CurveName) const override;
};
