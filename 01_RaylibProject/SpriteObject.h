#pragma once

#include "raylib-cpp/raylib-cpp.hpp"

#include "Object.h"

class SpriteObject : public Object
{
public:
	SpriteObject(const char* TexturePath);

	raylib::Texture Sprite;
	aie::Vector2 Origin = { 0.5f, 0.5f };

	virtual void Draw() override;
};