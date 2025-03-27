#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    // Copy Constructor
    Complex(const Complex& c) : real(c.real), imag(c.imag) {}
    // Operator Overloading
    Complex operator+(const Complex& c2) const;
    Complex operator-(const Complex& c2) const;
    Complex operator*(const Complex& c2) const;
    Complex operator/(const Complex& c2) const;
    Complex& operator=(const Complex& c2);
    void display() const;
};

Complex Complex::operator+(const Complex& c2) const
{
    return Complex(real + c2.real, imag + c2.imag);
}

Complex Complex::operator-(const Complex& c2) const
{
    return Complex(real - c2.real, imag - c2.imag);
}

Complex Complex::operator*(const Complex& c2) const
{
    return Complex(real * c2.real - imag * c2.imag, real * c2.imag + imag * c2.real);
}

Complex Complex::operator/(const Complex& c2) const
{
    double d = c2.real * c2.real + c2.imag * c2.imag;
    return Complex((real * c2.real + imag * c2.imag) / d, (imag * c2.real - real * c2.imag) / d);
}

Complex& Complex::operator=(const Complex& c2)
{
    real = c2.real;
    imag = c2.imag;
    return *this;
}

void Complex::display() const
{
    cout << "(" << real << ", " << imag << "i)" << endl;
}

int main()
{
    Complex c1(5, 4), c2(2, 10), c3;
    c3 = c1 + c2;
    cout << "c1 + c2 = ";
    c3.display();
   
    c3 = c2;
    c3.display();
    return 0;
}