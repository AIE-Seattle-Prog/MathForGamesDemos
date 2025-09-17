#pragma once

#include "Vector2.h"

class Object
{
public:
	aie::Vector2 Position;

	/**
	 * Runs once per frame. Use this for logic.
	 */
	virtual void Update() {}

	/**
	 * Runs once per frame. Use this for calling Raylib Draw calls.
	 */
	virtual void Draw() {}
};