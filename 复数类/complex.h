//complex.h
#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>

class Complex
{
private:
    double ax;
    double bx;
public:
    Complex(double a, double b);
    Complex();
    ~Complex();
    Complex operator+(const Complex & com);
    Complex operator-(const Complex & com);
    Complex operator*(const Complex & com);
    Complex operator~()const;
    friend Complex operator*(double n, const Complex & com);
    friend std::ostream & operator<<(std::ostream & os, const Complex & com);
    friend std::istream & operator>>(std::istream & is,Complex & com);
};
#endif // COMPLEX_H_
