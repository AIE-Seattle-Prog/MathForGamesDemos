#include "Player.h"

#include <iostream>

#include "Potion.h"


void Player::Update()
{
    Object::Update();

    if (IsKeyDown('W'))
    {
        Position.y -= GetFrameTime() * 50.0f;
    }

    if (IsKeyDown('S'))
    {
        Position.y += GetFrameTime() * 50.0f;
    }

    if (IsKeyDown('A'))
    {
        Position.x -= GetFrameTime() * 50.0f;
    }

    if (IsKeyDown('D'))
    {
        Position.x += GetFrameTime() * 50.0f;
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
