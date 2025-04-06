#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
    ifstream inFile("binary_file.bin", ios::in | ios::binary);
    if (inFile.is_open()) {
        char buffer[100];
        inFile.read(buffer, sizeof(buffer));
        if (inFile) {
            cout << "成功读取" << sizeof(buffer) << " 字节。" << endl;
        } else {
            cout << "读取了 " << inFile.gcount() << " 字节。" << endl;
        }
        inFile.close();
    } else {
        cerr << "无法打开文件" << endl;
    }
    return 0;
}    