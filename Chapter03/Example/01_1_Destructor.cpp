#include<iostream>
#include<string>
using namespace std;

class Dog
{
private:
    string name;
public:
    Dog(string n)
    {
        name = n;
        cout << "Dog: " << name <<
            " is created" << endl;
    }
    ~Dog()
    {
        cout << "Dog: " << name <<
            " is destoried" << endl;
    }
};

int main()
{
    Dog* pDog1 = new Dog("Henry");
    delete pDog1;

    cout << "Henry?" << endl;

    Dog dog2("Bob");
    return 0;
}