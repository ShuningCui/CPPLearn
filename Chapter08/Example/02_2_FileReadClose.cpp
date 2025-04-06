//在文件score.txt中使用文本文件学生信息数据
//每行保存一个学生的信息，格式为：学号 姓名 成绩,
//数据之间使用空格分隔
//读取文件score.txt中的数据，
//并将其输出到屏幕上，格式为：学号 姓名 成绩

#include <iostream>
#include <fstream>  // 头文件包含了文件输入输出的功能
#include <string>  // 头文件包含了字符串的功能
#include <iomanip> // 头文件包含了格式化输出的功能

using namespace std;  // 使用标准命名空间

int main( )  // 主函数
{
    ifstream inFile("score.txt", ios::in);  // 创建一个输入文件流对象，打开文件score.txt
    if (!inFile)  // 检查文件是否成功打开
    {
        cerr << "无法打开文件" << endl;  // 如果无法打开文件，输出错误信息
        return 1;  // 返回错误代码1
    }

    string studentID, name;  // 定义字符串变量studentID和name
    float score;  // 定义浮点数变量score

    cout << "学号\t姓名\t成绩" << endl;  // 输出表头

    while (inFile >> studentID >> name >> score)  // 循环读取文件中的学号、姓名和成绩
    {
        cout << studentID << "\t" << name << "\t" << fixed << setprecision(2) << score << endl;  // 输出学生信息
    }

    inFile.close( );  // 关闭文件流对象

    return 0;  // 返回0表示程序正常结束
}