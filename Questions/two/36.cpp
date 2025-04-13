#include <iostream>
using namespace std;
namespace ns //定义命名空间 ns
{
    int x = 24;
}
int main( )
{
    int x = 20;
    cout << x;
    cout << ns::x; //引用命名空间 ns
}