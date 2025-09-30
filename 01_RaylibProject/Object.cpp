#include "Object.h"

using aie::Matrix3;

Object::Object()
{
	LocalPosition = { 0, 0 };
	LocalRotation = 0.0f;
	LocalScale = { 1, 1 };

	Parent = nullptr;
}

aie::Matrix3 Object::GetLocalMatrix() const
{
	return Matrix3::MakeTranslation(LocalPosition) *
		Matrix3::MakeRotateZ(LocalRotation) *
		Matrix3::MakeScale(LocalScale);
	/*
	 *
	 * @todo terry didn't ask you build a Vector2 of MakeScale so...
	 * 
	 * A. Use MakeScale(float,float,float)
	 * B. Make that that accepts a Vector2 and assumes Z is 1
	 * C. Use MakeScale(Vector3) and provide 1 for the Z
	 */
}

aie::Matrix3 Object::GetWorldMatrix() const
{
	if (Parent == nullptr)
	{
		return GetLocalMatrix();
	}
	else
	{
		return Parent->GetWorldMatrix() * GetLocalMatrix();
	}
}
