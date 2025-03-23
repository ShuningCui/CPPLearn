#include<iostream>
#include<string>

using namespace std;

class Dog
{
private:
    int age;
    const string name;
public:
    Dog(int a, string n) : age(a), name(n) {}
    void AddAge(int a) { age += a; }
    void print() const
    {
        cout << "Name: " << name << ", Age: "
            << age << endl;
        // age++; //error
    }
};

int main()
{
    Dog d1(3, "Smokey");
    d1.AddAge(2);   //ok
    d1.print();

    const Dog d2(5, "Gunner");
    d2.print(); // const object can only call const member functions
    //d2.AddAge(2); // error
    return 0;
}