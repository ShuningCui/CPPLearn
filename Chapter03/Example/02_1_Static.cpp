#include<iostream>
using namespace std;

class Point
{
private:
    int x, y;
    static int count;
public:
    Point()
    {
        x = y = 0;
        count++;
    }
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
        count++;
    }

    ~Point()
    {
        count--;
    }

    // 静态成员函数
    static int getCount()
    {
        return count;
    }
    void print()
    {
        cout << "x: " << x << ", y: " << y << endl;
        cout << "Count: " << count << endl;
    }
};

int Point::count = 0; // 必须在类的外部初始化静态成员

int main()
{
    Point p1(10, 20);
    p1.print();
    Point p2(30, 40);
    p2.print();
    Point p3;
    p3.print();
    cout << "Total objects created: " << Point::getCount() << endl;
    //cout << p3.getCount() << endl;
    return 0;
}

/*
int main()
{
    cout<<Point::getCount()<<endl;
    return 0;
}
*/