#include<iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    void display() const;

    friend Complex operator+(const Complex& c1, const Complex& c2);
    friend Complex operator-(const Complex& c1, const Complex& c2);
    friend Complex operator*(const Complex& c1, const Complex& c2);
    friend Complex operator/(const Complex& c1, const Complex& c2);
};

Complex operator+(const Complex& c1, const Complex& c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

Complex operator-(const Complex& c1, const Complex& c2)
{
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

Complex operator*(const Complex& c1, const Complex& c2)
{
    return Complex(c1.real * c2.real - c1.imag * c2.imag, c1.real * c2.imag + c1.imag * c2.real);
}

Complex operator/(const Complex& c1, const Complex& c2)
{
    double d = c2.real * c2.real + c2.imag * c2.imag;
    return Complex((c1.real * c2.real + c1.imag * c2.imag) / d, (c1.imag * c2.real - c1.real * c2.imag) / d);
}