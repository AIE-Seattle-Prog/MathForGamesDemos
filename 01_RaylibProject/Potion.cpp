#include "Potion.h"

void Potion::Draw()
{
    if (!bIsConsumed)
    {
        SpriteObject::Draw();
    }
}

bool Potion::Use()
{
    if (!bIsConsumed)
    {
        bIsConsumed = true;
        return true;
    }

    return false;
}
