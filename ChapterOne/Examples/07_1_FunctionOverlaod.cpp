#include<iostream>
using namespace std;

int add(int a, int b);
double add(double a, double b);
int add(int a, int b, int c);

int main()
{
    cout << "add(10, 20) = " << add(10, 20) << endl;
    cout << "add(10.5, 20.5) = " << add(10.5, 20.5) << endl;
    cout << "add(10, 20, 30) = " << add(10, 20, 30) << endl;

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
} 
