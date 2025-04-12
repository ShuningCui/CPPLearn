#include<iostream>
using namespace std;
class Math
{
protected:
    int k;
public:
    Math(int n = 5) :k(n) { cout << k << endl; }
    ~Math( ) { cout << "Math"; }
    virtual void f( ) const = 0;
};
inline void Math::f( )const { cout << k - 3 << endl; }
class Add :public Math
{
public:
    ~Add( ) { cout << "Add"; }
    void f( ) const
    {
        cout << k + 3 << endl;
        Math::f( );
    }
};
int main( )
{
    Math& p = *new Add;
    p.f( );
    delete& p;
    return 0;
}