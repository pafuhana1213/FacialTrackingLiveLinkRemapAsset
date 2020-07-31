// Fill out your copyright notice in the Description page of Project Settings.


#include "FacialTrackingLiveLinkRemapAsset.h"

UFacialTrackingLiveLinkRemapAsset::UFacialTrackingLiveLinkRemapAsset(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	AppleARKitBlendShapeNamesToMeshCurveNames =
	{
		{TEXT("EyeBlinkLeft"), TEXT("EyeBlinkLeft")},
		{TEXT("EyeLookDownLeft"), TEXT("EyeLookDownLeft")},
		{TEXT("EyeLookInLeft"), TEXT("EyeLookInLeft")},
		{TEXT("EyeLookOutLeft"), TEXT("EyeLookOutLeft")},
		{TEXT("EyeLookUpLeft"), TEXT("EyeLookUpLeft")},
		{TEXT("EyeSquintLeft"), TEXT("EyeSquintLeft")},
		{TEXT("EyeWideLeft"), TEXT("EyeWideLeft")},
		{TEXT("EyeBlinkRight"), TEXT("EyeBlinkRight")},
		{TEXT("EyeLookDownRight"), TEXT("EyeLookDownRight")},
		{TEXT("EyeLookInRight"), TEXT("EyeLookInRight")},
		{TEXT("EyeLookOutRight"), TEXT("EyeLookOutRight")},
		{TEXT("EyeLookUpRight"), TEXT("EyeLookUpRight")},
		{TEXT("EyeSquintRight"), TEXT("EyeSquintRight")},
		{TEXT("EyeWideRight"), TEXT("EyeWideRight")},
		{TEXT("JawForward"), TEXT("JawForward")},
		{TEXT("JawLeft"), TEXT("JawLeft")},
		{TEXT("JawRight"), TEXT("JawRight")},
		{TEXT("JawOpen"), TEXT("JawOpen")},
		{TEXT("MouthClose"), TEXT("MouthClose")},
		{TEXT("MouthFunnel"), TEXT("MouthFunnel")},
		{TEXT("MouthPucker"), TEXT("MouthPucker")},
		{TEXT("MouthLeft"), TEXT("MouthLeft")},
		{TEXT("MouthRight"), TEXT("MouthRight")},
		{TEXT("MouthSmileLeft"), TEXT("MouthSmileLeft")},
		{TEXT("MouthSmileRight"), TEXT("MouthSmileRight")},
		{TEXT("MouthFrownLeft"), TEXT("MouthFrownLeft")},
		{TEXT("MouthFrownRight"), TEXT("MouthFrownRight")},
		{TEXT("MouthDimpleLeft"), TEXT("MouthDimpleLeft")},
		{TEXT("MouthDimpleRight"), TEXT("MouthDimpleRight")},
		{TEXT("MouthStretchLeft"), TEXT("MouthStretchLeft")},
		{TEXT("MouthStretchRight"), TEXT("MouthStretchRight")},
		{TEXT("MouthRollLower"), TEXT("MouthRollLower")},
		{TEXT("MouthRollUpper"), TEXT("MouthRollUpper")},
		{TEXT("MouthShrugLower"), TEXT("MouthShrugLower")},
		{TEXT("MouthShrugUpper"), TEXT("MouthShrugUpper")},
		{TEXT("MouthPressLeft"), TEXT("MouthPressLeft")},
		{TEXT("MouthPressRight"), TEXT("MouthPressRight")},
		{TEXT("MouthLowerDownLeft"), TEXT("MouthLowerDownLeft")},
		{TEXT("MouthLowerDownRight"), TEXT("MouthLowerDownRight")},
		{TEXT("MouthUpperUpLeft"), TEXT("MouthUpperUpLeft")},
		{TEXT("MouthUpperUpRight"), TEXT("MouthUpperUpRight")},
		{TEXT("BrowDownLeft"), TEXT("BrowDownLeft")},
		{TEXT("BrowDownRight"), TEXT("BrowDownRight")},
		{TEXT("BrowInnerUp"), TEXT("BrowInnerUp")},
		{TEXT("BrowOuterUpLeft"), TEXT("BrowOuterUpLeft")},
		{TEXT("BrowOuterUpRight"), TEXT("BrowOuterUpRight")},
		{TEXT("CheekPuff"), TEXT("CheekPuff")},
		{TEXT("CheekSquintLeft"), TEXT("CheekSquintLeft")},
		{TEXT("CheekSquintRight"), TEXT("CheekSquintRight")},
		{TEXT("NoseSneerLeft"), TEXT("NoseSneerLeft")},
		{TEXT("NoseSneerRight"), TEXT("NoseSneerRight")},
		{TEXT("TongueOut"), TEXT("TongueOut")},
		{TEXT("HeadYaw"), TEXT("HeadYaw")},
		{TEXT("HeadPitch"), TEXT("HeadPitch")},
		{TEXT("HeadRoll"), TEXT("HeadRoll")},
		{TEXT("LeftEyeYaw"), TEXT("LeftEyeYaw")},
		{TEXT("LeftEyePitch"), TEXT("LeftEyePitch")},
		{TEXT("LeftEyeRoll"), TEXT("LeftEyeRoll")},
		{TEXT("RightEyeYaw"), TEXT("RightEyeYaw")},
		{TEXT("RightEyePitch"), TEXT("RightEyePitch")},
		{TEXT("RightEyeRoll"), TEXT("RightEyeRoll")},
	};
}

FName UFacialTrackingLiveLinkRemapAsset::GetRemappedCurveName_Implementation(FName CurveName) const 
{
	if (auto Found = AppleARKitBlendShapeNamesToMeshCurveNames.Find(CurveName))
	{
		return *Found;
	}
	return NAME_None;
}
