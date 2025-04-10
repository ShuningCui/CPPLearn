//从键盘输入学生的学号、姓名和成绩，
//将这些信息写入文件score.bin中，
//使用二进制文件保存数据，保存后读取文件中的数据，
//并将其输出到屏幕上，格式为：学号 姓名 成绩

#include <iostream>
#include <fstream>  // 头文件包含了文件输入输出的功能
#include <string>  // 头文件包含了字符串的功能
#include <iomanip> // 头文件包含了格式化输出的功能
#include <cstring> // 头文件包含了字符串操作的功能
using namespace std;  // 使用标准命名空间

class Student
{
public:
    char studentID[20];  // 学号
    char name[20];       // 姓名
    float score;           // 成绩
};

int main( )
{
    // 创建一个输出文件流对象，打开文件score.bin
    ofstream outFile("score.bin", ios::out | ios::binary);
    if (!outFile)  // 检查文件是否成功打开
    {
        cerr << "无法打开文件" << endl;  // 如果无法打开文件，输出错误信息
        return 1;  // 返回错误代码1
    }

    char id[20];
    char name[20];  // 定义字符串变量studentID和name
    float score;            // 定义浮点数变量score

    cout << "请输入学号、姓名和成绩（用空格分隔）：" << endl;  // 提示用户输入信息
    //Ctrl+Z是Windows系统下的结束输入标志，Linux系统下是Ctrl+D
    // 以Ctrl+Z结束输入
    while (cin >> id >> name >> score)  // 循环读取用户输入的学号、姓名和成绩
    {
        Student student;  // 创建Student对象
        strcpy(student.studentID, id);  // 设置学号
        strcpy(student.name, name);            // 设置姓名
        student.score = score;          // 设置成绩
        // 将对象写入二进制文件
        outFile.write((char*)&student, sizeof(student));  // 将对象写入二进制文件
    }

    outFile.close( );  // 关闭文件流对象

    // 创建一个输入文件流对象，打开文件score.bin
    ifstream inFile("score.bin", ios::in | ios::binary);
    if (!inFile)  // 检查文件是否成功打开
    {
        cerr << "无法打开文件" << endl;  // 如果无法打开文件，输出错误信息
        return 1;  // 返回错误代码1
    }

    cout << "学号\t姓名\t成绩" << endl;  // 输出表头

    Student student;  // 创建一个Student对象，用于读取数据

    while (inFile.read((char*)&student, sizeof(student)))  // 循环读取二进制文件中的数据
    {
        cout << student.studentID << "\t" << student.name << "\t" << fixed << setprecision(2) << student.score << endl;  // 输出学生信息
    }

    inFile.close( );  // 关闭文件流对象

    return 0;  // 返回0表示程序正常结束
}

