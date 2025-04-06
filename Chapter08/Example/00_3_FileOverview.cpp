#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( )
{
    fstream ioFile("io.txt");  // 打开文件
    if (ioFile.is_open( ))
    {
        ioFile << "写入一些内容到文件。" << endl;  // 写入数据
        ioFile.seekg(0, ios::beg);  // 将文件指针移动到文件开头
        string line;
        while (getline(ioFile, line))
        {  // 读取文件内容
            cout << line << endl;
        }
        ioFile.close( );  // 关闭文件
    }
    else
    {
        cout << "无法打开文件" << endl;
    }
    return 0;
}