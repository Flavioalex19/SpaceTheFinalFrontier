#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RaceManagerBase.generated.h"

class ARacerBase;

/**
 * @brief Central race coordinator for Star Racer.
 *
 * Tracks all racers currently in a race, their start positions, and their
 * progress through rings/checkpoints/laps. Ring, Checkpoint, and Finish Line
 * trigger actors report events here (ReportRingPassed / ReportLapPassed)
 * rather than tracking progress themselves, so a single race manager can
 * coordinate multiple racers (player + AI) at once.
 *
 * @author John Nashida
 */
UCLASS(Blueprintable)
class STARRACER_API ARaceManagerBase : public AActor
{
    GENERATED_BODY()
public:
    ARaceManagerBase();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Race")
    TArray<TObjectPtr<ARacerBase>> Racers;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Race")
    TArray<AActor*> StartPositions;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Race")
    AActor* FinishLineRef;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Race")
    TArray<AActor*> RingArray;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Race")
    int32 TotalLaps = 3;

    UPROPERTY(BlueprintReadOnly, Category="Race")
    TMap<TObjectPtr<ARacerBase>, int32> LapTracker;

    UFUNCTION(BlueprintCallable, Category="Race")
    void ReportRingPassed(ARacerBase* Racer, int32 RingIndex);

    UFUNCTION(BlueprintCallable, Category="Race")
    void ReportLapPassed(ARacerBase* Racer);

    UFUNCTION(BlueprintCallable, Category="Race")
    TArray<TObjectPtr<ARacerBase>> GetRacePositions() const;

protected:
    virtual void BeginPlay() override;
};