#include <iostream>
using namespace std;

int main() {
    int num = 255;
    int num2 = 1024;
    double decimalNum = 123.456;

    // 使用 setf 函数设置格式标志
    // 设置显示正数符号
    cout.setf(ios::showpos);
    // 设置十六进制输出
    cout.setf(ios::hex, ios::basefield);
    // 设置显示进制前缀
    cout.setf(ios::showbase);
    cout << "使用 setf 函数设置格式：" << num << endl;
    cout << "使用 setf 函数设置格式：" << num2 << endl;
    // 保存当前的格式标志
    ios::fmtflags oldFlags = cout.flags();

    // 使用 flags 函数设置新的格式标志
    // 清除之前设置的十六进制和显示进制前缀标志
    cout.flags(ios::dec | ios::fixed | ios::showpoint);
    // 设置浮点数精度为 2
    cout.precision(2);
    cout << "使用 flags 函数设置格式：" << decimalNum << endl;

    // 恢复之前的格式标志
    cout.flags(oldFlags);
    cout << "恢复之前的格式：" << num << endl;

    return 0;
}