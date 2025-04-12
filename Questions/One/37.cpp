// 37. 程序用来求直角三角形斜边长度，运行结果为5。

#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    double x, y;
    friend class Line; // 第1个空
public:
    Point(double i = 0, double j = 0) { x = i;y = j; }
    Point(Point& p) { x = p.x;y = p.y; }
};

class Line
{
private:
    Point p1, p2;
public:
    Line(Point& xp1, Point& xp2) :p1(xp1), p2(xp2) { }
    double GetLength( )
    {
        double dx = p2.x - p1.x;
        double dy = p2.y - p1.y;
        return sqrt(dx * dx + dy * dy);
    }
};

int main( )
{
    Point L1, L2(3, 4); //两条直角边的长度
    Line L3(L1, L2);
    cout << L3.GetLength( ) << endl;  //第2个空
    return 0;
}