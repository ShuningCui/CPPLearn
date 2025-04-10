#include <iostream>
#include <fstream>
#include <string>

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
    fstream file("score.bin", ios::in | ios::binary);
    if (!file)
    {
        cerr << "无法打开文件！" << endl;
        return 1;
    }

    Student s;  // 创建一个Student对象，用于读取数据
    // 移动文件指针到第二个学生的数据位置
    file.seekg(sizeof(Student), ios::beg);
    // 读取第二个学生的数据
    file.read((char*)&s, sizeof(Student));

    cout << "ID: " << s.studentID << endl;
    cout << "Name: " << s.name << endl;
    cout << "Score: " << s.score << endl;

    file.close( );
    return 0;
}
