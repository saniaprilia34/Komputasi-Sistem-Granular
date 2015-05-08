//
/*
 *   Vect2.cpp
 *
 */

#include <math.h>
#include "Vect2.h"

Vect2::Vect2()
{
	X = 0.0;
	Y = 0.0;
}

Vect2::Vect2(double x, double y)
{
	X = x;
	Y = y;
}

Vect2::Vect2(const Vect2 &vector)
{
	X = vector.X;
	Y = vector.Y;
}

Vect2::~Vect2()
{
}

double Vect2::Length()
{
	return sqrt(X*X + Y*Y);
}

void Vect2::Normalize()
{
	double length = Length();

	X = X / length;
	Y = Y / length;
}

double Vect2::Dot(const Vect2 &vector)
{
	return (X*vector.X + Y*vector.Y);
}

double Vect2::AngleBetween(Vect2 &vector)
{
    //double teta = 180 - acos((X*vector.X + Y*vector.Y) / (Length() * vector.Length())) * (180.0 / 3.141592);

    double c = ((X*vector.X + Y*vector.Y) / (Length() * vector.Length()));
    if(c < -1.0 || c > 1.0)
    {
        if(c < 0)
            c = -1.0;
        else
            c = 1.0;
    }
    double teta = 180 - acos(c) * (180.0 / M_PI);

	double sign = (X*vector.Y - Y*vector.X);
	if(sign > 0)
        teta *= -1;
    return teta;
}

double Vect2::AngleBetween2(Vect2 &vector)
{
	return asin((X*vector.Y - Y*vector.X) / (Length() * vector.Length())) * (180.0 / 3.141592);
}

Vect2 & Vect2::operator = (const Vect2 &vector)
{
	X = vector.X;
	Y = vector.Y;
	return *this;
}

Vect2 & Vect2::operator += (const Vect2 &vector)
{
	X += vector.X;
	Y += vector.Y;
	return *this;
}

Vect2 & Vect2::operator -= (const Vect2 &vector)
{
	X -= vector.X;
	Y -= vector.Y;
	return *this;
}

Vect2 & Vect2::operator += (const double value)
{
	X += value;
	Y += value;
	return *this;
}

Vect2 & Vect2::operator -= (const double value)
{
	X -= value;
	Y -= value;
	return *this;
}

Vect2 & Vect2::operator *= (const double value)
{
	X *= value;
	Y *= value;
	return *this;
}

Vect2 & Vect2::operator /= (const double value)
{
	X /= value;
	Y /= value;
	return *this;
}

Vect2 Vect2::operator + (const Vect2 &vector)
{
	return Vect2(X + vector.X, Y + vector.Y);
}

Vect2 Vect2::operator - (const Vect2 &vector)
{
	return Vect2(X - vector.X, Y - vector.Y);
}

Vect2 Vect2::operator + (const double value)
{
	return Vect2(X + value, Y + value);
}

Vect2 Vect2::operator - (const double value)
{
	return Vect2(X - value, Y - value);
}

Vect2 Vect2::operator * (const double value)
{
	return Vect2(X * value, Y * value);
}

Vect2 Vect2::operator / (const double value)
{
	return Vect2(X / value, Y / value);
}

