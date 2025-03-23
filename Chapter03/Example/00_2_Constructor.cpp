#include<iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int x1, int y1) : x(x1), y(y1)
    {
        cout << "Two parameter Constructor called" << endl;
    }
    // 委托构造函数
    Point()
    {
        x = y = 0;
        cout << "No parameter Constructor called" << endl;
    }
    //拷贝构造函数
    Point(Point& p)
    {
        x = p.x;
        y = p.y;
        cout << "Copy Constructor called" << endl;
    }
    void print()
    {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main()
{
    //Two parameter Constructor called
    Point p1(10, 20);
    p1.print();

    //No parameter Constructor called
    Point p2;
    p2.print();

    //Copy Constructor called
    Point p3 = p1;
    p3.print();

    //Copy Constructor called
    Point p4(p1);
    p4.print();

    Point p5;
    p5 = p1;
    p5.print();
    return 0;
}