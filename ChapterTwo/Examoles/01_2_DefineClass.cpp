#include <iostream>

using namespace std;

class AccessRights
{
private:
    int a;

public:
    int c;

public:
    void Display();
    void SetA(int a);
    int GetA();
};

void AccessRights::Display()
{
    cout << "a: " << a << endl;
    cout << "c: " << c << endl;
}

void AccessRights::SetA(int a)
{
    this->a = a;
}

int AccessRights::GetA()
{
    return a;
}

int main()
{
    AccessRights ar;
    // Error
    // ar.a = 10;
    ar.SetA(10);

    ar.c = 20; // Ok, c is public
    ar.Display();

    int a = ar.GetA();
    cout << "a: " << a << endl;

    // Error
    // a=ar.a;
    return 0;
}