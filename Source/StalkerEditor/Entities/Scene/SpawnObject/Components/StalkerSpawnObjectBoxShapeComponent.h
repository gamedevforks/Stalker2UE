#pragma once
#include "StalkerSpawnObjectBoxShapeComponent.generated.h"


UCLASS(hideCategories = (Rendering, Physics, HLOD, Activation, Input, Actor, Cooking, Collision, Lighting, Navigation, ComponentReplication, Variable, LOD, TextureStreaming, Mobile, RayTracing, Replication), ClassGroup = (Stalker), meta = (DisplayName = "Stalker Box Shape", BlueprintSpawnableComponent))
class UStalkerSpawnObjectBoxShapeComponent :public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	FPrimitiveSceneProxy*		CreateSceneProxy	() override;
	FBoxSphereBounds			CalcBounds			(const FTransform& InLocalToWorld) const override;
	void						UpdateColor			();
	void						OnComponentCreated	() override;

	UPROPERTY()
	FColor						ShapeColor;

	UPROPERTY(EditAnywhere, Category = "Shape")
	FVector						BoxExtent = FVector(100,100,100);


};