#include<iostream>
using namespace std;

void print(int n = 10);

int main()
{
    print(5);
    print();
    return 0;
}

void print(int n)
{
    cout << "Value of n is: " << n << endl;
}