#include <iostream>
using namespace std;
// 定义函数模板
template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
T myAbs(T a)
{
    return (a < 0) ? -a : a;
}

int main()
{
    // 调用函数模板处理整数
    int intMax = ::max(10, 20);
    cout << "整数的最大值是: " << intMax << endl;

    // 调用函数模板处理浮点数
    double doubleMax = ::max(3.14, 2.71);
    cout << "浮点数的最大值是: " << doubleMax << endl;

    double doubleAbs = myAbs(-3.14);
    int intAbs = myAbs<int>(-10);
    return 0;
}