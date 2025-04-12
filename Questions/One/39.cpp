//39. 以下程序输出name:D Class Derived = 80，请将程序补充完整。

#include <iostream>
#include <cstring>
using namespace std;
class Base
{
public:
    char name[80];   //第1个空
    Base(const char* n) { strcpy(name, n); }
};

class Derived : public Base   //第2个空
{
public:
    Derived(const char* nm) :Base(nm) { }
    void show( );
};
void Derived::show( ) { cout << "name:" << name; }
int main( )
{
    Derived d1("D");
    d1.show( );
    cout << " Class Derived=" << sizeof(Derived) << endl;
}