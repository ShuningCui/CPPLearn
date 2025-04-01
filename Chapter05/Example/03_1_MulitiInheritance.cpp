#include <iostream>
#include <string>

using namespace std;

// 交通工具基类
class Vehicle 
{
protected:
    string brand;
    int wheels;
public:
    // 基类构造函数
    Vehicle(const std::string& b, int w) : brand(b), wheels(w) 
    {
        cout << "Vehicle constructor called" << endl;
    }

    void displayVehicleInfo() const 
    {
        cout << "Brand: " << brand << ", Wheels: " << wheels << endl;
    }
};

// 电子设备基类
class ElectricalDevice 
{
protected:
    int power;

public:
    // 基类构造函数
    ElectricalDevice(int p) : power(p) {
        cout << "ElectricalDevice constructor called" << endl;
    }

    void displayDeviceInfo() const 
    {
        cout << "Power: " << power << " watts" << endl;
    }
};

// 电动交通工具类，继承自 Vehicle 和 ElectricalDevice
class ElectricVehicle : public Vehicle, public ElectricalDevice
{
private:
    int batteryCapacity;
public:
    // 派生类构造函数，调用基类构造函数
    ElectricVehicle(const std::string& b, int w, int p, int bc)
        : Vehicle(b, w), ElectricalDevice(p), batteryCapacity(bc) 
    {
        cout << "ElectricVehicle constructor called" << endl;
    }

    void displayInfo() const {
        displayVehicleInfo();
        displayDeviceInfo();
        cout << "Battery Capacity: " << batteryCapacity 
        << " Ah" << endl;
    }
};

int main() {
    ElectricVehicle ev("BYD", 4, 100, 80);
    ev.displayInfo();
    return 0;
}    