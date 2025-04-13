#include <iostream>
using namespace std;
class Sample
{
    int n;
    static int sum;
public:
    Sample(int x) { n = x; }
    void add( ) { sum += n; }
    void disp( ) { cout << "n=" << n << ",sum=" << sum << endl; }
};
int Sample::sum = 0;

int main( )
{
    Sample a(2), b(3), c(5);
    a.add( ); a.disp( );
    b.add( ); b.disp( );
    c.add( ); c.disp( );
}