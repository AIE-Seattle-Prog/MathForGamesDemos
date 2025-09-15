#pragma once

namespace aie
{
	struct Vector2
	{
		// An anonymous union
		union
		{
			// An anonymous struct (non-standard c++ feature!!) (supported on MSVC)

			// As a X component and Y component
			struct
			{
				// X-component
				float x;
				// Y-component
				float y;
			};
			// Access as float array
			float data[2];
		};

		/// <summary>
		/// Default constructor - initializes all components to zero
		/// </summary>
		Vector2() : x(0), y(0) {}

#ifdef RAYLIB_CPP_INCLUDE_RAYLIB_CPP_HPP
		/// <summary>
		/// Implicit conversion from raylib-cpp's Vector2 to our Vector2
		/// </summary>
		/// <param name="RVector2">Raylib Vector2</param>
		Vector2(const raylib::Vector2& RVector2)
		{
			x = RVector2.x;
			y = RVector2.y;
		}

		/// <summary>
		/// Implicit conversion from our Vector2 to raylib-cpp's Vector2
		/// </summary>
		operator raylib::Vector2() const
		{
			return { x, y };
		}
#endif

#ifdef RAYLIB_H
		/// <summary>
		/// Implicit conversion from raylib-cpp's Vector2 to our Vector2
		/// </summary>
		/// <param name="RVector2">Raylib Vector2</param>
		Vector2(const ::Vector2& RVector2)
		{
			x = RVector2.x;
			y = RVector2.y;
		}

		/// <summary>
		/// Implicit conversion from our Vector2 to raylib-cpp's Vector2
		/// </summary>
		operator ::Vector2() const
		{
			return { x, y };
		}
#endif
	};
}