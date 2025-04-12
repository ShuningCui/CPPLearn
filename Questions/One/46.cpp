//46. 已定义类 Figure 和 main 函数，
//main 函数中调用派生类函数 showarea( ) 
//的不同实现版本，求得直角三角形和矩形的面积。
//请编写此程序的派生类 Triangle 和 Square。
#include <iostream>
using namespace std;

class Figure
{
protected:
    double x, y;
public:
    void set(double i, double j = 0) { x = i; y = j; }
    virtual void showarea( )const = 0;
};

class Triangle :public Figure
{
public:
    void showarea( )const
    {
        cout << "Triangle area=" << x * y / 2 << endl;
    }
};

class Square :public Figure
{
public:
    void showarea( )const
    {
        cout << "Square area=" << x * y << endl;
    }
};

int main( )
{
    Triangle t;
    Square s;
    t.set(10.48, 50);
    t.showarea( );
    s.set(888, 100);
    s.showarea( );
    return 0;
}