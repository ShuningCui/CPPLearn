#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    // 使用 istream 的 get 函数读取单个字符
    cout << "请输入一个字符: ";
    char ch;
    cin.get(ch);
    cout << "你输入的字符是: " << ch << endl;

    // 清除输入缓冲区的换行符
    cin.ignore();

    // 使用 istream 的 getline 函数读取一行字符串
    cout << "请输入一行字符串: ";
    string line;
    getline(cin, line);
    cout << "你输入的字符串是: " << line << endl;

    // 使用 ostream 的 put 函数输出单个字符
    cout << "使用 put 函数输出字符: ";
    cout.put('A');
    cout << endl;

    // 使用 istream 的 get 函数读取多个字符到字符数组
    cout << "请输入最多 10 个字符: ";
    char buffer[11];
    cin.get(buffer, 10);
    cout << "你输入的字符是: " << buffer << endl;


    // 使用 istream 的 peek 函数查看下一个字符
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 清除输入缓冲区
    cout << "请输入一些字符: ";
    ch = cin.peek();
    cout << "下一个字符是: " << ch << endl;

    // 使用 istream 的 ignore 函数跳过字符
    cin.ignore(10, '\n');
    cout << "已跳过一些字符" << endl;

    // 使用 istream 的 gcount 函数获取读取字符数
    cin.read(buffer, 5);
    cout << "读取的字符数: " << cin.gcount() << endl;

    // 使用 ostream 的 write 函数向文件写入数据
    ofstream outFile("output.txt", ios::binary);
    if (outFile) {
        const char* data = "Hello, World!";
        outFile.write(data, 13);
        outFile.close();
        cout << "已向文件写入数据" << endl;
    }

    // 使用 ostream 的 flush 函数刷新输出流
    cout << "马上刷新...";
    cout.flush();
    cout << " 已刷新" << endl;

    // 使用 istream 的 putback 函数放回字符
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 清除输入缓冲区
    cout << "请输入一个字符: ";
    cin.get(ch);
    cin.putback(ch);
    char newCh = cin.get();
    cout << "放回并再次读取的字符: " << newCh << endl;

    return 0;
}    