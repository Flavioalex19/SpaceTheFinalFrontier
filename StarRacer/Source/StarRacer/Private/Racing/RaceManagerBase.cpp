/**
 * @brief Implementation of ARaceManagerBase.
 * @author John Nashida
 */
#include "Racing/RaceManagerBase.h"
#include "Racing/RacerBase.h"

ARaceManagerBase::ARaceManagerBase()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ARaceManagerBase::BeginPlay()
{
    Super::BeginPlay();
    // TODO: loop Racers + StartPositions, teleport each racer to its slot
}

void ARaceManagerBase::ReportRingPassed(ARacerBase* Racer, int32 RingIndex)
{
    // TODO
}

void ARaceManagerBase::ReportLapPassed(ARacerBase* Racer)
{
    // TODO
}

TArray<ARacerBase*> ARaceManagerBase::GetRacePositions() const
{
    return TArray<ARacerBase*>(Racers); // TODO: sort by progress
}
