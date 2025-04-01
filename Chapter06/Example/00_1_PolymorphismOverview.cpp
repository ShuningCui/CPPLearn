#include <iostream>
#include <string>

using namespace std;

// 基类：动物
class Animal
{
public:
    void makeSound() const
    {
        cout << "动物发出声音" << endl;
    }
};

// 派生类：狗
class Dog : public Animal
{
public:
    void makeSound() const
    {
        cout << "汪汪汪" << endl;
    }
};

// 派生类：猫
class Cat : public Animal
{
public:
    void makeSound() const
    {
        cout << "喵喵喵" << endl;
    }
};


int main()
{
    Animal animal; // 创建基类对象
    Animal* pAnimal; // 创建基类指针
    Dog dog; // 创建派生类对象
    Cat cat; // 创建派生类对象
    pAnimal = &dog; // 将派生类对象的地址赋给基类指针
    pAnimal->makeSound(); // 调用派生类的函数
    pAnimal = &cat;
    pAnimal->makeSound(); // 调用派生类的函数
    animal = dog; // 基类对象赋值派生类对象
    animal.makeSound(); // 调用基类的函数
    animal = cat; // 基类对象赋值派生类对象
    animal.makeSound(); // 调用基类的函数
    Animal& animalRef = dog; // 基类引用指向派生类对象
    animalRef.makeSound(); // 调用派生类的函数
    return 0;
}    