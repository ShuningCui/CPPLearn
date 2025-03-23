#include<iostream>
#include<cmath>

using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int x1, int y1) : x(x1), y(y1) {}
    // Point(int x1, int y1) { x = x1; y = y1; }
    void print() const
    {
        cout << "x: " << x << ", y: " << y << endl;
    }
    friend class Line;
};

class Line
{
private:
    Point p1, p2;
public:
    Line(int x1, int y1, int x2, int y2) : p1(x1, y1), p2(x2, y2) {}
    void print() const
    {
        p1.print();
        p2.print();
    }
    double length() const
    {
        return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    }
};

int main()
{
    Line l1(10, 20, 30, 40);
    l1.print();
    cout << "Length of the line: " << l1.length() << endl;
    return 0;
}