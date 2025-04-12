// 40. 以下程序输出23, 10.1, c，请将程序补充完整。

#include <iostream>
using namespace std;
template <typename AT>
AT max1(AT x, AT y) //第1个空
{
    return (x > y) ? x : y;
}

int main( )
{
    int i1 = 20, i2 = 23;
    double d1 = 10.1, d2 = 4.1;
    char c1 = 'a', c2 = 'c';
    cout << max1(i1, i2) << ",";
    cout << max1(d1, d2) << ",";   //第2个空
    cout << max1(c1, c2) << endl;
}