#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
    double x = 10.456;
    cout << showpos << x << endl;
    cout << "10(十六)=" << hex << (int)x << endl;
    cout.width(10);cout.fill('#');cout << x << endl;
    cout.setf(ios::left);cout << x << endl;
    cout.setf(ios::scientific);cout << x << endl;
    cout.put('a' + 25);
    return 0;
}