#include <iostream>
#include <string>

using namespace std;

// 电池类
class Battery 
{
private:
    int capacity; // 电池容量
public:
    Battery(int cap) : capacity(cap) {}
    int getCapacity() const {
        return capacity;
    }
};

// 电子设备基类
class ElectronicDevice 
{
protected:
    string brand;
    Battery battery;
public:
    ElectronicDevice(const std::string& b, int batteryCap) 
    : brand(b), battery(batteryCap) {}
    std::string getBrand() const 
    {
        return brand;
    }
    int getBatteryCapacity() const 
    {
        return battery.getCapacity();
    }

    void displayInfo() const 
    {
        cout << "Brand: " << brand << ", Battery Capacity: " 
        << battery.getCapacity() << " mAh" << endl;
    }
};

// 智能手机类，继承自电子设备
class Smartphone : public ElectronicDevice 
{
private:
    int screenSize;
public:
    Smartphone(const std::string& b, int batteryCap, int screen) 
    : ElectronicDevice(b, batteryCap), screenSize(screen) {}

    int getScreenSize() const {
        return screenSize;
    }

    void displayInfo() const
    {
        // 调用基类的显示信息函数
        ElectronicDevice::displayInfo();
        cout << "Screen Size: " << screenSize 
        << " inches" << endl;
    }
};

int main() {
    Smartphone myPhone("Xiaomi", 5000, 6.8);
    myPhone.displayInfo();

    return 0;
}    