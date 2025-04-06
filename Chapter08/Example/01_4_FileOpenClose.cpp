#include <iostream>
#include <fstream>

using namespace std;

int main( )
{
    ofstream outFile("binary_file.bin", ios::out | ios::binary);
    if (outFile.is_open( ))
    {
        char data[] = { 0x01, 0x02, 0x03, 0x04 };
        outFile.write(data, sizeof(data));
        outFile.close( );
    }
    else
    {
        cerr << "无法打开文件" << endl;
    }
    return 0;
}