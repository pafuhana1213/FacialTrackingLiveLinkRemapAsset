# FacialTrackingLiveLinkRemapAsset
Easier Remapping in UE4's Face AR Sample

# How to Use
1. Add the source code to the FaceAR sample and compile it, then create a new BP based on the FacialTrackingLiveLinkRemapAsset.

![1](https://cdn-ak.f.st-hatena.com/images/fotolife/p/pafuhana1213/20200802/20200802013556.png "1")

2. Adjust the Apple ARKit Blend Shape Names to Mesh Curve Names property Of the new BP.  
The left side( Keys ) of the property is the curve name on the Live Link Face side, and the right side (Values) is the curve name after the replacement.  　
So, edit only the right side basically.
![2](https://cdn-ak.f.st-hatena.com/images/fotolife/p/pafuhana1213/20200802/20200802013708.png "2")

That's all.   
There is no need to change the Get Remapped Curve Name function like LiveLinkRemapAsset.  
Now you just need to specify this asset to the LiveLinkPose node.  
