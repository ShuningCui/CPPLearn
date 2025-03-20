#include<iostream>
using namespace std;

void f(const int num);

int main()
{
    const int i = 10;
    // i = 20; // Error: assignment of read-only variable 'i'
    int const j = 20; // same as const int j = 20;
    const int* ptr1 = &i;
    // *ptr = 30; // Error: assignment of read-only location '* ptr'
    ptr1 = &j; // OK
    int k = 40;
    int* const ptr2 = &k;
    // ptr2 = &j; // Error: assignment of read-only variable 'ptr2' 
    *ptr2 = 30; // OK
    const int* const ptr3 = &i;
    // *ptr3 = 40; // Error: assignment of read-only location '* ptr3'
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;    
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "*ptr3 = " << *ptr3 << endl;

    f(k); // OK

    return 0;
} 

void f(const int num)
{
    // num = 20; // Error: assignment of read-only parameter 'num'
    cout << "num = " << num << endl;
}
 