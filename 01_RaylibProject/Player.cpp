#include "Player.h"

#include <iostream>

#include "Potion.h"


void Player::Update()
{
    if (IsKeyDown('W'))
    {
        PositionV -= GetFrameTime() * 50.0f;
    }

    if (IsKeyDown('S'))
    {
        PositionV += GetFrameTime() * 50.0f;
    }

    if (IsKeyDown('A'))
    {
        PositionH -= GetFrameTime() * 50.0f;
    }

    if (IsKeyDown('D'))
    {
        PositionH += GetFrameTime() * 50.0f;
    }

    if (IsKeyPressed('E'))
    {
        if (HeldPotion != nullptr)
        {
            bool bDidUse = HeldPotion->Use();
            if (bDidUse)
            {
                std::cout << "HEALED!" << std::endl;
            }
        }
    }
}

void Player::Draw()
{
    PlayerTexture.Draw(raylib::Vector2(PositionH, PositionV));
}
