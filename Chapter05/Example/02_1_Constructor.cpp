#include<iostream>
#include <string>

using namespace std;
// 基类：交通工具
class Vehicle
{
protected:
    string brand;
    int year;
public:
    // 基类构造函数
    Vehicle(string b, int y) : brand(b), year(y)
    {
        cout << "Vehicle constructor: " << brand << " " << year << endl;
    }

    void displayInfo() const
    {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

// 派生类：汽车
class Car : public Vehicle
{
private:
    int numDoors;
public:
    // 派生类构造函数，调用基类构造函数并初始化自身成员
    Car(string b, int y, int doors) : Vehicle(b, y), numDoors(doors) {
        std::cout << "Car constructor: " << numDoors << " doors" << endl;
    }

    void displayCarInfo() const {
        displayInfo();
        cout << "Number of doors: " << numDoors << endl;
    }
};

// 派生类：自行车
class Bicycle : public Vehicle {
private:
    bool hasGears;
public:
    // 派生类构造函数，调用基类构造函数并初始化自身成员
    Bicycle(const string b, int y, bool gears) : Vehicle(b, y), hasGears(gears) {
        cout << "Bicycle constructor: "
            << (hasGears ? "With gears" : "Without gears")
            << endl;
    }

    void displayBicycleInfo() const {
        displayInfo();
        cout << "Has gears: "
            << (hasGears ? "Yes" : "No") << endl;
    }
};

// 派生类：电动汽车，继承自汽车
class ElectricCar : public Car {
private:
    int batteryCapacity;
public:
    // 派生类构造函数，调用基类（Car）构造函数并初始化自身成员
    ElectricCar(const string b, int y, int doors, int capacity) : Car(b, y, doors), batteryCapacity(capacity) {
        cout << "ElectricCar constructor: Battery capacity "
            << batteryCapacity << " kWh" << endl;
    }

    void displayElectricCarInfo() const {
        displayCarInfo();
        cout << "Battery capacity: "
            << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    // 创建汽车对象
    Car myCar("Tank", 2022, 4);
    cout << "\nCar information:" << endl;
    myCar.displayCarInfo();

    // 创建自行车对象
    Bicycle myBicycle("Giant", 2023, true);
    cout << "\nBicycle information:" << endl;
    myBicycle.displayBicycleInfo();

    // 创建电动汽车对象
    ElectricCar myElectricCar("BYD", 2024, 4, 75);
    cout << "\nElectric car information:" << endl;
    myElectricCar.displayElectricCarInfo();

    return 0;
}

