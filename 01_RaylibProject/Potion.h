#pragma once

/*
 * 
 * Header Inclusion Order
 * 
 * 1. System Includes (i.e., in your compiler, or OS)
 * 2. Libraries
 * 3. Your Libraries
 * 4. Your Project
 */

#include "raylib-cpp/raylib-cpp.hpp"

#include "SpriteObject.h"

class Potion : public SpriteObject
{
    bool bIsConsumed = false;

public:
    Potion(const char* TexturePath) : SpriteObject(TexturePath) {}

    bool Use();

    virtual void Draw() override;
};