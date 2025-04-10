//读入一个文本文件line.txt,
//在每一行前面添加行号，
//并将结果输出到屏幕上，格式为：行号 内容
//同时将结果写入文件line_out.txt中，格式为：行号 内容

#include <iostream>
#include <fstream>  // 头文件包含了文件输入输出的功能
#include <string>  // 头文件包含了字符串的功能
#include <iomanip> // 头文件包含了格式化输出的功能

using namespace std;  // 使用标准命名空间

int main( )  // 主函数
{
    ifstream inFile("score.txt", ios::in);  // 创建一个输入文件流对象，打开文件line.txt
    if (!inFile)  // 检查文件是否成功打开
    {
        cerr << "无法打开文件" << endl;  // 如果无法打开文件，输出错误信息
        return 1;  // 返回错误代码1
    }

    ofstream outFile("line_out.txt", ios::out);  // 创建一个输出文件流对象，打开文件line_out.txt
    if (!outFile)  // 检查文件是否成功打开
    {
        cerr << "无法打开文件" << endl;  // 如果无法打开文件，输出错误信息
        return 1;  // 返回错误代码1
    }

    string line;  // 定义字符串变量line
    int lineNumber = 1;  // 定义行号变量lineNumber

    while (getline(inFile, line))  // 循环读取文件中的每一行
    {
        cout << setw(3) << lineNumber << ": " << line << endl;  // 输出行号和内容到屏幕上
        outFile << setw(3) << lineNumber << ": " << line << endl;  // 输出行号和内容到文件中
        lineNumber++;  // 行号加1
    }

    inFile.close( );  // 关闭输入文件流对象
    outFile.close( );  // 关闭输出文件流对象

    return 0;  // 返回0表示程序正常结束
}