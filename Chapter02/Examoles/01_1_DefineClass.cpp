#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
    string name;
    string gender;
    int age;

public:
    void Register(string n, string g, int a);
    void ShowMe();
};

void Person::Register(string n, string g, int a)
{
    name = n;
    gender = g;
    age = a;
}

void Person::ShowMe()
{
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    cout << "Age: " << age << endl;
}

int main()
{
    Person p;
    p.Register("Xiaoming", "Male", 20);
    p.ShowMe();
    return 0;
}