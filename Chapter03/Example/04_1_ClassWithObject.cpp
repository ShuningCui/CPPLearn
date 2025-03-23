#include<iostream>
#include<cmath>

using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int x1, int y1) : x(x1), y(y1) {
        cout << "Constructor called" << endl;
    }

    int getX() const { return x; }
    int getY() const { return y; }
    // Point(int x1, int y1) { x = x1; y = y1; }
    void print() const
    {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

class Line
{
private:
    Point startPoint;
    Point endPoint;
public:
    Line(int x1, int y1, int x2, int y2) : startPoint(x1, y1), endPoint(x2, y2) {}
    double length() const
    {
        return sqrt((endPoint.getX() - startPoint.getX()) * (endPoint.getX() - startPoint.getX()) +
            (endPoint.getY() - startPoint.getY()) * (endPoint.getY() - startPoint.getY()));
    }
    void print() const
    {
        startPoint.print();
        endPoint.print();
    }
};

int main()
{
    Line l1(10, 20, 30, 40);
    l1.print();
    cout << "Length: " << l1.length() << endl;
    return 0;
}