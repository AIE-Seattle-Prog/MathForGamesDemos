#pragma once

#include "Vector2.h"
#include "Matrix3.h"

class Object
{
public:
	aie::Vector2 LocalPosition;
	float LocalRotation;
	aie::Vector2 LocalScale;

	Object();

	/* @todo Make this private!! */
	Object* Parent;

	aie::Matrix3 GetLocalMatrix() const;
	aie::Matrix3 GetWorldMatrix() const;

	/**
	 * Runs once per frame. Use this for logic.
	 */
	virtual void Update() {}

	/**
	 * Runs once per frame. Use this for calling Raylib Draw calls.
	 */
	virtual void Draw() {}
};