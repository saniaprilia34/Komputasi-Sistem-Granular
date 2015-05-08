/*
 *   Vect2.h
 *
 */

#ifndef _VECT2_H_
#define _VECT2_H_

class Vect2
{
private:

protected:

public:
    double X;
    double Y;

    Vect2();
    Vect2(double x, double y);
    Vect2(const Vect2 &vector);
    ~Vect2();

    double Length();
    void Normalize();
    double Dot(const Vect2 &vector);
    double AngleBetween(Vect2 &vector);
    double AngleBetween2(Vect2 &vector);

    Vect2 & operator = (const Vect2 &vector);
    Vect2 & operator += (const Vect2 &vector);
    Vect2 & operator -= (const Vect2 &vector);
    Vect2 & operator += (const double value);
    Vect2 & operator -= (const double value);
    Vect2 & operator *= (const double value);
    Vect2 & operator /= (const double value);
    Vect2 operator + (const Vect2 &vector);
    Vect2 operator - (const Vect2 &vector);
    Vect2 operator + (const double value);
    Vect2 operator - (const double value);
    Vect2 operator * (const double value);
    Vect2 operator / (const double value);
};

#endif
