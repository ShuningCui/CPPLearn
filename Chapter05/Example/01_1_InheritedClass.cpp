#include<iostream>
#include<string>

using namespace std;

class Person
{
private:
    string security = "Security";  //c++11 feature
protected:
    string name = "John";
    int age = 25;
public:
    void display() const { cout << "Name: " << name << ", Age: " << age << endl; }
};

class Student : public Person
{
private:
    string studentID = "1234567890";
public:
    void study() { cout << name << " can study." << endl; }
};

int main()
{
    Person p;
    p.display();

    Student s;
    s.display();
    s.study();

    return 0;
}