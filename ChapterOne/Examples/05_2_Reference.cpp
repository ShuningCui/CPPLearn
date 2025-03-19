#include<iostream>
using namespace std;

void swap(int& x, int& y);

int main()
{
    int a = 10, b = 20;
    cout << "Before swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(a, b);
    cout << "After swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}