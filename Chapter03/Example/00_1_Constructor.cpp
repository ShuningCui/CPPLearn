#include<iostream>
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
    void print() { cout << "x: " << x << ", y: " << y << endl; }
};

int main()
{
    Point p1(10, 20);
    p1.print();
    return 0;
}