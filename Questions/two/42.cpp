#include<iostream>
using namespace std;
class x
{
protected:
    int a;
public:
    x( ) { a = 1; }
};
class x1 : virtual public x
{
public:
    x1( ) { a += 1; cout << "x1:" << a << ","; }
};
class x2 : virtual public x
{
public:
    x2( ) { a += 2; cout << "x2:" << a << ","; }
};
class y : public x1, public x2
{
public:
    y( ) { cout << "y:" << a << endl; }
};
int main( )
{
    y obj;
}