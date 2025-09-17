#pragma once

// 1. System Includes

// 2. Library
#include "raylib-cpp/raylib-cpp.hpp"

// 3. Your Library
#include "Vector2.h"

// 4. Your Project
#include "SpriteObject.h"

class Player : public SpriteObject
{
public:
    class Potion* HeldPotion = nullptr;

    Player(const char* TexturePath) : SpriteObject(TexturePath) {}
    
    virtual void Update() override;
};