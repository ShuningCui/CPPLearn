#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main( )
{
    ifstream inFile("text_file.txt", ios::in);
    if (inFile.is_open( ))
    {
        string line;
        while (getline(inFile, line))
        {
            cout << line << endl;
        }
        inFile.close( );
    }
    else
    {
        cerr << "无法打开文件" << endl;
    }
    return 0;
}