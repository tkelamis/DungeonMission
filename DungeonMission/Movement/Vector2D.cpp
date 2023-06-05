#include "Vector2D.h"

//Vector2D Vector2D::operator+(const Vector2D& v2) const
//{
//	return Vector2D(p_x + v2.p_x, p_y + v2.p_x);
//}
//
//Vector2D Vector2D::operator*(float scalar)
//{
//	return Vector2D(p_x * scalar, p_y * scalar);
//}
//
//Vector2D& Vector2D::operator*=(float scalar)
//{
//	p_x *= scalar;
//	p_y *= scalar;
//	return *this;
//}
//
//Vector2D Vector2D::operator-(const Vector2D& v2) const
//{
//	return Vector2D(p_x - v2.p_x, p_y - v2.p_y);
//}
//
//Vector2D Vector2D::operator/(float scalar)
//{
//	return Vector2D(p_x / scalar, p_y / scalar);
//}
//
//Vector2D& Vector2D::operator/=(float scalar)
//{
//	p_x /= scalar; p_y /= scalar;
//	return *this;
//}
//
//void Vector2D::NormalizeVector()
//{
//	float l = length();
//	if (l > 0)
//	{
//		(*this) *= 1 / l;
//	}
//}
//
//Vector2D& operator+=(Vector2D& v1, const Vector2D& v2)
//{
//	v1.p_x += v2.p_x;
//	v1.p_y += v2.p_y;
//
//	return v1;
//}
//
//Vector2D& operator-=(Vector2D& v1, const Vector2D& v2)
//{
//	v1.p_x -= v2.p_x;
//	v1.p_y -= v2.p_y;
//	return v1;
//}
