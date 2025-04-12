#include <iostream>
using namespace std;
class Complex
{
private:
    double realPart, imagePart;
public:
    Complex(double real = 0, double image = 0) :realPart(real), imagePart(image) { }
    Complex operator-(const Complex& a) const
    {
        return Complex(realPart - a.realPart, imagePart - a.imagePart);
    }
    void Show( ) const
    {
        cout << realPart << "+" << imagePart << "i" << endl;
    }
};
int main( )
{
    Complex a(8, 7), b(6, 5), c;
    c = a - b;
    cout << "a=";a.Show( );
    cout << "b=";b.Show( );
    cout << "c=";c.Show( );
    return 0;
}
