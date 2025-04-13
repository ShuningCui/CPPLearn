// 37. 以下程序输出 “98 分”，请将程序补充完整。
#include <iostream>
using namespace std;
class Test
{
private:
    int n;
public:
    Test(int i = 9) { n = i; }
    int Get( ) { return n; }
    int Get( ) const { return n - 2; } // const 成员函数
};
int main( )
{
    Test a;
    const Test b(10);
    cout << a.Get( ) << b.Get( ) << "分" << endl;
}
