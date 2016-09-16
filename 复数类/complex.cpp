//complex.cpp
#include <iostream>
#include "complex.h"

Complex::Complex(double a, double b)
{
    ax = a;
    bx = b;
}

Complex::Complex()
{
    ax = bx = 0.0;
}

Complex::~Complex()
{

}

Complex Complex::operator+(const Complex & com)
{
    Complex temp;
    temp.ax = ax + com.ax;
    temp.bx = bx + com.bx;
    return temp;
}

Complex Complex::operator-(const Complex & com)
{
    Complex temp;
    temp.ax = ax - com.ax;
    temp.bx = bx - com.bx;
    return temp;
}

Complex Complex::operator*(const Complex & com)
{
    Complex temp;
    temp.ax = ax * com.ax - bx * com.bx;
    temp.bx = ax * com.bx + bx * com.ax;
    return temp;
}

Complex Complex::operator~()const
{
    return Complex(ax,-bx);
}

Complex operator*(double n, const Complex & com)
{
    return Complex(n * com.ax, n * com.bx);
}

std::ostream & operator<<(std::ostream & os, const Complex & com)
{
    os << "(" << com.ax << ", " << com.bx << "i)";
    return os;
}

std::istream & operator>>(std::istream & is, Complex & com)
{
    is >> com.ax >> com.bx;
    return is;
}

