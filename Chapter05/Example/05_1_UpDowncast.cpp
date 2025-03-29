#include <iostream>

using namespace std;

// 基类：图形
class Shape
{
public:
    virtual void draw( ) const
    {
        cout << "Drawing a generic shape." << endl;
    }
};

// 派生类：圆形
class Circle : public Shape
{
public:
    void draw( ) const override
    {
        cout << "Drawing a circle." << endl;
    }
    void specialCircleOperation( ) const
    {
        cout << "Performing special circle operation." << endl;
    }
};

// 派生类：矩形
class Rectangle : public Shape
{
public:
    void draw( ) const override
    {
        cout << "Drawing a rectangle." << endl;
    }
    void specialRectangleOperation( ) const
    {
        cout << "Performing special rectangle operation." << endl;
    }
};

int main( )
{
    // 创建不同类型的图形对象
    Circle circle;
    Rectangle rectangle;

    Shape* shapePtr1 = &circle; // 向上转型：基类指针指向派生类对象
    Shape* shapePtr2 = &rectangle; // 向上转型：基类指针指向派生类对象

    Shape shape = circle; // 向上转型：基类对象初始化派生类对象
    shape.draw( ); // 调用基类的 draw 方法

    //Circle newCircle = (Circle)shape; // 向下转型：基类对象转换为派生类对象

    return 0;
}
