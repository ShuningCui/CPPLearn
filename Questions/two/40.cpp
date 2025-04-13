//40. 将程序补充完整，使其运行结果为：
//输出 1:1008
//输出 2:883

#include <iostream>
using namespace std;
class A
{
public:
    A(int a = 135) { m_a = a; }
    int get( ) { return m_a++; }
private:
    int m_a;
};
int operator+(A& a1, A& a2) { return a1.get( ) + a2.get( ) - 15; }
int main( )
{
    A a1(888), a2, a3 = 9;
    cout << "输出 1:" << a1 + a2 << endl;
    cout << "输出 2:" << a1 + a3 << endl;
    return 0;
}