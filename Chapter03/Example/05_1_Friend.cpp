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
    // Point(int x1, int y1) { x = x1; y = y1; }
    void print() const
    {
        cout << "x: " << x << ", y: " << y << endl;
    }
    friend double distance(const Point& p1, const Point& p2);
};

double distance(const Point& p1, const Point& p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main()
{
    Point p1(10, 20);
    Point p2(30, 40);
    p1.print();
    p2.print();
    cout << "Distance between two points: " << distance(p1, p2) << endl;
    return 0;
}