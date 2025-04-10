//从键盘输入学生的学号、姓名和成绩，
//将这些信息写入文件score.txt中，
//使用文本文件保存数据，
//每行保存一个学生的信息，格式为：学号 姓名 成绩。

#include <iostream>
#include <fstream>  // 头文件包含了文件输入输出的功能
#include <string>  // 头文件包含了字符串的功能  

using namespace std;  // 使用标准命名空间

int main( )  // 主函数
{
    ofstream outFile("score.txt", ios::out);  // 创建一个输出文件流对象，打开文件score.txt
    if (!outFile.is_open( ))  // 检查文件是否成功打开
    {
        cerr << "无法打开文件" << endl;  // 如果无法打开文件，输出错误信息
        return 1;  // 返回错误代码1
    }

    string studentID, name;  // 定义字符串变量studentID和name
    float score;  // 定义浮点数变量score

    cout << "请输入学号、姓名和成绩（用空格分隔）：" << endl;  // 以Ctrl+Z结束输入
    //Ctrl+Z是Windows系统下的结束输入标志，Linux系统下是Ctrl+D
    while (cin >> studentID >> name >> score)  // 循环读取用户输入的学号、姓名和成绩
    {
        outFile << studentID << " " << name << " " << score << endl;  // 将输入的信息写入文件
    }

    outFile.close( );  // 关闭文件流对象

    return 0;  // 返回0表示程序正常结束
}