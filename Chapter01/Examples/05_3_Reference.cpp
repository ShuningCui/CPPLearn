#include <iostream>
using namespace std;

int& getLargest(int& x, int& y);

int main()
{
    int num1 = 20, num2 = 30;
    int& largest = getLargest(num1, num2);
    std::cout << "The largest number is: " << largest << std::endl;
    return 0;
}

int& getLargest(int& x, int& y)
{
    return (x > y) ? x : y;
}