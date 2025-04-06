#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( )
{
    ifstream inFile("example.txt");  // 打开文件
    if (inFile.is_open( ))
    {
        string line;
        while (getline(inFile, line))
        {  // 逐行读取文件内容
            cout << line << endl;
        }
        inFile.close( );  // 关闭文件
    }
    else
    {
        cout << "无法打开文件" << endl;
    }
    return 0;
}