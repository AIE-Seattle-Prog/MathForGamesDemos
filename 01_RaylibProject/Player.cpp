#include "Player.h"

#include <iostream>

#include "Potion.h"


void Player::Update()
{
    Object::Update();

    if (IsKeyDown('W'))
    {
        LocalPosition.y -= GetFrameTime() * 50.0f;
    }

    if (IsKeyDown('S'))
    {
        LocalPosition.y += GetFrameTime() * 50.0f;
    }

    if (IsKeyDown('A'))
    {
        LocalPosition.x -= GetFrameTime() * 50.0f;
    }

    if (IsKeyDown('D'))
    {
        LocalPosition.x += GetFrameTime() * 50.0f;
    }

    if (IsKeyDown('Q'))
    {
        LocalRotation -= 5.0f * GetFrameTime();
    }
    if (IsKeyDown('E'))
    {
        LocalRotation += 5.0f * GetFrameTime();
    }

    if (IsKeyDown('X'))
    {
        LocalScale.x -= 0.5f * GetFrameTime();
    }
    if (IsKeyDown('Z'))
    {
        LocalScale.x += 0.5f * GetFrameTime();
    }

    if (IsKeyDown('C'))
    {
        LocalScale.y -= 0.5f * GetFrameTime();
    }
    if (IsKeyDown('V'))
    {
        LocalScale.y += 0.5f * GetFrameTime();
    }

    if (IsKeyPressed('H'))
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
