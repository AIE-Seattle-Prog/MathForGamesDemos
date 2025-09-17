#include "SpriteObject.h"

SpriteObject::SpriteObject(const char* TexturePath) : Sprite(TexturePath)
{
}

void SpriteObject::Draw()
{
	Object::Draw();

	Sprite.Draw(
		raylib::Rectangle(0, 0, (float)Sprite.width, (float)Sprite.height),						// SourceRec
		raylib::Rectangle(Position.x, Position.y, (float)Sprite.width * Scale.x, (float)Sprite.height * Scale.y),	// DestRec
		raylib::Vector2((float)Sprite.width * Origin.x * Scale.x, (float)Sprite.width * Origin.y * Scale.y),		// Origin
		0.0f,	// Rotation
		raylib::Color::White() // Tint
	);
}
