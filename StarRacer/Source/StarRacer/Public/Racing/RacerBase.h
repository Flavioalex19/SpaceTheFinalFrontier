#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RacerBase.generated.h"

/**
 * @brief Common base for anything that races (player ship and AI ships).
 * Tracked by ARaceManagerBase.
 */
UCLASS(Blueprintable)
class STARRACER_API ARacerBase : public APawn
{
    GENERATED_BODY()
public:
    ARacerBase();
};
