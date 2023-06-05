#pragma once
#include <math.h>


class Vector2D
{
public:
	Vector2D(float x, float y) :p_x(x), p_y(y) {};

	float GetX() { return p_x; }
	float GetY() { return p_y; }

	void SetX(float x) { p_x = x; }
	void SetY(float y) { p_y = y; }

	/*float length() { return sqrt(p_x * p_x + p_y * p_y); }

	void NormalizeVector();

	Vector2D operator+(const Vector2D& v2) const;
	friend Vector2D& operator+=(Vector2D& v1, const Vector2D& v2);

	
	Vector2D operator*(float scalar);
	Vector2D& operator*=(float scalar);

	Vector2D operator-(const Vector2D& v2) const;
	friend Vector2D& operator-=(Vector2D& v1, const Vector2D& v2);

	Vector2D operator/(float scalar);
	Vector2D& operator/=(float scalar)*/;

private:
	float p_x;
	float p_y;
};
