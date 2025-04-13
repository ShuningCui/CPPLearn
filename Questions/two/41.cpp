#include<iostream>
using namespace std;
class Myclass
{
private:
    int* x;
public:
    Myclass(int a);
    ~Myclass( );
};
Myclass::Myclass(int a)
{
    x = new int(a);
    cout << "调用构造函数" << endl;
}
Myclass::~Myclass( )
{
    cout << "调用析构函数" << endl;
    delete x;
}
int main( )
{
    Myclass p(1);
}