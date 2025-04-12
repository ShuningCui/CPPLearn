// 38. 以下程序输出hello!hello!，请将程序补充完整。

#include <iostream>
#include <cstring>
using namespace std;
class str
{
private:
    char* st;
public:
    str(char* a) { set(a); }
    str& operator=(str& a) //第1个空
    {
        set(a.st);
        return *this;
    }
    void show( ) { cout << st << "!"; }
    void set(char* s)
    {
        st = new char[strlen(s) + 1];
        strcpy(st, s);
    }
};

int main( )
{
    str s1("hello"), s2("world");
    s2 = s1; // (2)
    s1.show( );s2.show( );
}