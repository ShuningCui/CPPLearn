#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( )
{
    ofstream outFile("output.txt");  // 打开文件
    if (outFile.is_open( ))
    {
        outFile << "这是一行写入文件的内容。" << endl;  // 写入数据
        outFile.close( );  // 关闭文件
    }
    else
    {
        cout << "无法打开文件" << endl;
    }
    return 0;
}