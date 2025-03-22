#include <iostream>
#include <string>
using namespace std;

int main()
{
    int one, two;
    char array[20];
    string str;

    double three;
    char ch = 'a';

    cout << "输入两个整数，一个字符，一个字符串和一个浮点数：";
    cout << "以空格、Tab或Enter键分隔" << endl;
    cin >> one >> two >> ch >> array >> three;
    str = array;
    cout << "输入的整数是：" << one << "\t" << two << endl;
    cout << "输入的字符是：" << ch << endl;
    cout << "输入的字符串是：" << str << endl;
    cout << "输入的浮点数是：" << three << endl;

    return 0;
}