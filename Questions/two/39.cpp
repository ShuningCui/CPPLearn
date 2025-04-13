//39. 请将程序补充完整，使其输出结果为：
//2024年4月
//C++程序设计自学考试

#include <iostream>
using namespace std;
class A
{
public:
    A( ) { cout << "2024年"; }
    ~A( ) { cout << "自学考试" << endl; }
};
class B : A
{
public:
    B( ) { cout << "4月" << endl; }
    ~B( ) { cout << "C++程序设计"; }
};
int main( )
{
    B obj;
}