#include<iostream>
#include<string>

using namespace std;

class Animal
{
protected:
    string name;
    int age;
    int weight;
public:
    void eat() { cout << "I can eat." << endl; }
    void sleep() { cout << "I can sleep." << endl; }
};

class Dog : public Animal
{
public:
    void bark() { cout << "I can bark." << endl; }
};

class cat : private Animal
{
public:
    void jump() { cout << "I can jump." << endl; }
};

int main()
{
    Dog dog;
    dog.eat();
    dog.sleep();
    dog.bark();

    cat c;
    c.jump();

    return 0;
}