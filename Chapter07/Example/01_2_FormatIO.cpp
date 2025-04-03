#include <iostream>
#include <iomanip>
using namespace std;

int main( )
{
    int num = 123;
    double pi = 3.14159265358979323846;
    string text = "Hello";

    // 使用 setw 和 setfill 控制宽度和填充字符
    cout << "使用 setw 和 setfill:" << endl;
    cout << setw(10) << setfill('*') << num << endl;

    // 使用 left 和 right 控制对齐方式
    cout << "\n使用 left 和 right:" << endl;
    cout << left << setw(10) << setfill('-') << num << endl;
    cout << right << setw(10) << setfill('-') << num << endl;

    // 使用 fixed 和 setprecision 控制浮点数的输出精度
    cout << "\n使用 fixed 和 setprecision:" << endl;
    cout << fixed << setprecision(5) << pi << endl;

    // 使用 scientific 以科学计数法输出浮点数
    cout << "\n使用 scientific:" << endl;
    cout << scientific << pi << endl;

    // 使用 hex、oct 和 dec 控制整数输出进制
    cout << "\n使用 hex、oct 和 dec:" << endl;
    cout << "十六进制: " << hex << num << endl;
    cout << "八进制: " << oct << num << endl;
    cout << "十进制: " << dec << num << endl;

    // 使用 boolalpha 输出布尔值为文本形式
    cout << "\n使用 boolalpha:" << endl;
    bool isTrue = true;
    cout << boolalpha << isTrue << endl;

    // 使用 uppercase 控制输出的大小写
    cout << "\n使用 uppercase:" << endl;
    cout << uppercase << hex << num << endl;

    // 使用 internal 控制符号和数字的对齐方式
    cout << "\n使用 internal:" << endl;
    int negativeNum = -123;
    cout << setw(10) << setfill('0') << internal << negativeNum << endl;

    // 使用 showpos 显示正数的正号
    cout << "\n使用 showpos:" << endl;
    cout << showpos << num << endl;

    // 使用 noshowpos 取消显示正数的正号
    cout << "\n使用 noshowpos:" << endl;
    cout << noshowpos << num << endl;

    // 使用 showpoint 强制显示小数点
    cout << "\n使用 showpoint:" << endl;
    double integerLikeDouble = 10;
    cout << showpoint << setprecision(2) << integerLikeDouble << endl;

    // 使用 noshowpoint 取消强制显示小数点
    cout << "\n使用 noshowpoint:" << endl;
    cout << noshowpoint << integerLikeDouble << endl;

    return 0;
}