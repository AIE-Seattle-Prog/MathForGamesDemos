#pragma once

// System Includes

// Library
#include "raylib-cpp/raylib-cpp.hpp"

// Your Library
#include "Vector2.h"

// Your Project
// "left intentionally blank."

class Player
{
public:
    raylib::Texture PlayerTexture;
    class Potion* HeldPotion = nullptr;

    float PositionH = 0;
    float PositionV = 0;

    Player(const char* TexturePath) : PlayerTexture(TexturePath) {}
    
    void Update();

    void Draw();
};