//
// 1. System Includes (i.e., in your compiler, or OS)
// 2. Libraries
// 3. Your Libraries
// 4. Your Project
//

// System Includes
#include <iostream>

// Library
#include "raylib-cpp/raylib-cpp.hpp"

// Your Library
#include "Vector2.h"

// Your Project
#include "Player.h"
#include "SpriteObject.h"
#include "Potion.h"

int main()
{
    /* 
     * Initialization
     */
    int ScreenWidth = 800;
    int ScreenHeight = 450;

    int CommonTexSize = 256;

    raylib::Window Window(ScreenWidth, ScreenHeight, "raylib-cpp - basic window");
    raylib::Texture TestTexture("Res/uvchecker.png");

    Player Hardy("Res/HardyLabel.png");
    Potion TestPotion("Res/PotionPlaceholder.png");
    SpriteObject Fish("Res/KenneyNLFishPack/fish_blue_skeleton.png");

    Fish.LocalPosition = { 0, -50 };
    Fish.Parent = &Hardy;
    TestPotion.LocalScale = { 0.25f, 0.25f };
    Hardy.HeldPotion = &TestPotion;

    Object* GameObjects[] = { &Hardy, &TestPotion, &Fish };
    auto GameObjectsCount = sizeof(GameObjects) / sizeof(Object*);

    SetTargetFPS(60);

    while (!Window.ShouldClose())
    {
        /*
         * Update logic
         */
        for (size_t i = 0; i < GameObjectsCount; ++i)
        {
            GameObjects[i]->Update();
        }

        Fish.LocalRotation = (float)GetTime();

        /*
         * Draw logic
         */
        BeginDrawing();

        Window.ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        for (size_t i = 0; i < GameObjectsCount; ++i)
        {
            GameObjects[i]->Draw();
        }

        EndDrawing();
    }

    // UnloadTexture() and CloseWindow() are called automatically.

    return 0;
}