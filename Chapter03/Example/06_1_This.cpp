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
};

int main()
{
    Point p1(10, 20);
    return 0;
}