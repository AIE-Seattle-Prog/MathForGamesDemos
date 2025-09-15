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
// "left intentionally blank."

int main() {
    int screenWidth = 800;
    int screenHeight = 450;

    aie::Vector2 MyVector;
    MyVector.x = 5.0f;
    MyVector.y = 13.0f;

    std::cout << MyVector.data[0] << std::endl;
    std::cout << MyVector.data[1] << std::endl;

    raylib::Vector2 RVec2;
    RVec2 = MyVector;

    raylib::Vector2 TheirRVec2;
    TheirRVec2.x = 4;
    TheirRVec2.y = 6;

    MyVector = TheirRVec2;

    raylib::Window window(screenWidth, screenHeight, "raylib-cpp - basic window");
    raylib::Texture logo("Res/uvchecker.png");

    SetTargetFPS(60);

    while (!window.ShouldClose())
    {
        BeginDrawing();

        window.ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        // Object methods.
        logo.Draw(
            screenWidth / 2 - logo.GetWidth() / 2,
            screenHeight / 2 - logo.GetHeight() / 2);

        EndDrawing();
    }

    // UnloadTexture() and CloseWindow() are called automatically.

    return 0;
}