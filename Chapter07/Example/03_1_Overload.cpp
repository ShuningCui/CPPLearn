#include<iostream>
#include<iomanip>
using namespace std;

class Complex
{
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }
    friend Complex operator+(const Complex& c1, const Complex& c2);
    friend Complex operator-(const Complex& c1, const Complex& c2);
    friend Complex operator*(const Complex& c1, const Complex& c2);
    friend Complex operator/(const Complex& c1, const Complex& c2);
    friend ostream& operator<<(ostream& os, const Complex& c);
    friend istream& operator>>(istream& is, Complex& c);
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

ostream& operator<<(ostream& os, const Complex& c)
{
    os << c.real << showpos << c.imag << "i" << noshowpos;
    return os;
}

istream& operator>>(istream& is, Complex& c)
{
    is >> c.real >> c.imag; // 读取实部、虚部
    return is;
}

int main( )
{
    Complex c1, c2;
    cout << "请输入第一个复数 (格式: a b): ";
    cin >> c1;
    cout << "请输入第二个复数 (格式: a b): ";
    cin >> c2;

    cout << "c1 + c2 = " << c1 + c2 << endl;
    cout << "c1 - c2 = " << c1 - c2 << endl;
    cout << "c1 * c2 = " << c1 * c2 << endl;
    cout << "c1 / c2 = " << c1 / c2 << endl;

    return 0;
}