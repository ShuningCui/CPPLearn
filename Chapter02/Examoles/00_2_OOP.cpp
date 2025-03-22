#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
private:
    int a, b, c;

public:
    Triangle(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    bool IsTriangle()
    {
        return (a + b > c) && (a + c > b) && (b + c > a);
    }
    double GetArea()
    {
        double s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    int GetPerimeter()
    {
        return a + b + c;
    }
};

int main()
{
    int a, b, c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    Triangle t(a, b, c);
    if (t.IsTriangle())
    {
        cout << "The area of the triangle is: "
            << t.GetArea() << endl;
        cout << "The perimeter of the triangle is: "
            << t.GetPerimeter() << endl;
    }
    else
        cout << "The sides do not form a triangle." << endl;
    return 0;
}