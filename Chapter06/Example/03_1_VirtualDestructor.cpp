#include <iostream>

// 基类
class Base
{
public:
    Base()
    {
        std::cout << "Base 构造函数被调用" << std::endl;
    }
    // 声明为虚析构函数
    virtual ~Base()
    {
        std::cout << "Base 析构函数被调用" << std::endl;
    }
};

// 派生类
class Derived : public Base
{
private:
    int* data;
public:
    Derived()
    {
        data = new int[10];
        std::cout << "Derived 构造函数被调用" << std::endl;
    }
    ~Derived()
    {
        delete[] data;
        std::cout << "Derived 析构函数被调用" << std::endl;
    }
};

int main()
{
    Base* basePtr = new Derived();
    delete basePtr;
    return 0;
}