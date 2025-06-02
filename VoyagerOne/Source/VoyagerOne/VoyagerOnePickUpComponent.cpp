// Copyright Epic Games, Inc. All Rights Reserved.

#include "VoyagerOnePickUpComponent.h"

UVoyagerOnePickUpComponent::UVoyagerOnePickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UVoyagerOnePickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UVoyagerOnePickUpComponent::OnSphereBeginOverlap);
}

void UVoyagerOnePickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AVoyagerOneCharacter* Character = Cast<AVoyagerOneCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
