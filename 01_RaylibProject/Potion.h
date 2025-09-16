#pragma once

#include "raylib-cpp/raylib-cpp.hpp"

class Potion
{
    bool bIsConsumed = false;

public:
    raylib::Texture Icon;

    float PositionH = 0;
    float PositionV = 0;

    Potion(const char* TexturePath) : Icon(TexturePath) {}

    bool Use();

    void Update();

    void Draw();
};