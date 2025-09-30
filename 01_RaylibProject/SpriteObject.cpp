#include "SpriteObject.h"
#include "Utils.h"

using aie::Matrix3;

SpriteObject::SpriteObject(const char* TexturePath) : Sprite(TexturePath)
{
}

void SpriteObject::Draw()
{
	Object::Draw();

	/* get my world transform */
	Matrix3 WorldTRS = GetWorldMatrix();

	/* get POSITION */
	aie::Vector2 WorldPos = aie::Vector2(WorldTRS.m7, WorldTRS.m8);
	/* get ROTATION */
	float WorldRot = aie::AngleFrom2D(WorldTRS.m1, WorldTRS.m2);
	/* get SCALE */
	aie::Vector2 WorldScl = aie::Vector2(
		WorldTRS.axis[0].Magnitude(),	// X-axis mag for X-scale
		WorldTRS.axis[1].Magnitude()	// Y-axis mag for Y-scale
	);

	Sprite.Draw(
		raylib::Rectangle(0, 0, (float)Sprite.width, (float)Sprite.height),						// SourceRec
		raylib::Rectangle(WorldPos.x, WorldPos.y, (float)Sprite.width * WorldScl.x, (float)Sprite.height * WorldScl.y),	// DestRec
		raylib::Vector2((float)Sprite.width * Origin.x * WorldScl.x, (float)Sprite.width * Origin.y * WorldScl.y),		// Origin
		WorldRot * aie::Rad2Deg,	// Rotation
		raylib::Color::White() // Tint
	);
}
