#include "Potion.h"

void Potion::Update()
{
    return;
}

void Potion::Draw()
{
    if (!bIsConsumed)
    {
        Icon.Draw(raylib::Vector2(PositionH, PositionV));
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
