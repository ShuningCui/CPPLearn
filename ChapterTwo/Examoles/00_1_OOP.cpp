#include<iostream>
#include<cmath>

using namespace std;

bool IsTriangle(int a, int b, int c);
double GetArea(int a, int b, int c);
int GetPerimeter(int a, int b, int c);

int main()
{
    int a, b, c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    if (IsTriangle(a, b, c))
    {
        cout << "The area of the triangle is: " 
        << GetArea(a, b, c) << endl;
        cout << "The perimeter of the triangle is: " 
        << GetPerimeter(a, b, c) << endl;
    }
    else
        cout << "The sides do not form a triangle." << endl;
    return 0;
}

bool IsTriangle(int a, int b, int c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double GetArea(int a, int b, int c)
{
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int GetPerimeter(int a, int b, int c)
{
    return a + b + c;
} 
