#include<iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Point& add(const Point& p)
    {
        x += p.x;
        y += p.y;
        return *this;
    }
    void print() const
    {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main()
{
    Point p1(10, 20);
    Point p2(30, 40);
    Point p3(50, 60);
    p1.add(p2).add(p3);
    //p1.add(p2);
    //p1.add(p3);
    p1.print();
    return 0;
}