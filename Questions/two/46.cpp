#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
    ifstream inFile("C:\\f1.txt", ios::in);  // 以读模式打开C盘的f1.txt文件
    ofstream outFile("D:\\f2.txt", ios::out); // 以写模式打开D盘的f2.txt文件
    if (!inFile)
    {
        cerr << "无法打开文件 C:\\f1.txt" << endl;
        return 1;
    }
    if (!outFile)
    {
        cerr << "无法打开文件 D:\\f2.txt" << endl;
        inFile.close( );
        return 1;
    }
    char ch;
    while (inFile.read(&ch, 1))
    {  // 每次读一个字符
        outFile.write(&ch, 1);     // 每次写一个字符
    }
    inFile.close( );
    outFile.close( );
    cout << "文件复制完成" << endl;
    return 0;
}