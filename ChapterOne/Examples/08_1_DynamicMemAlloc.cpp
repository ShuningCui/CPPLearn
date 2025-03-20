#include<iostream>
using namespace std;

int main()
{
    int* ptr = new int;
    *ptr = 10;
    cout << "*ptr = " << *ptr << endl;
    delete ptr;
    // cout << "*ptr = " << *ptr << endl; // Error: dereferencing pointer to incomplete type
    int* arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    delete[] arr;
    return 0;
}