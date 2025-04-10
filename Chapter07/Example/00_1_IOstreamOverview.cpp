//freopen example
#include <iostream>
#include <cstdio>

using namespace std;

int main( )
{
    // 重定向标准输入到文件 input.txt
    if (freopen("C:\\Users\\cuish\\Source\\CPPLearn\\Chapter07\\Example\\input.txt", "r", stdin) == NULL)
    {
        cout << "无法打开文件 input.txt" << endl;
        return 1;
    }
    int num;
    cin >> num;  // 从 input.txt 中读取数据
    cout << "读取的数字是: " << num << endl;
    // 恢复标准输入输出
    freopen("con", "r", stdin);

    if (freopen("C:\\Users\\cuish\\Source\\CPPLearn\\Chapter07\\Example\\output.txt", "w", stdout) == NULL)
    {
        cout << "无法打开文件 output.txt" << endl;
        return 1;
    }
    cout << "读取的数字是: " << num << endl; // 输出到 output.txt 中
    // 恢复标准输入输出
    freopen("con", "w", stdout);
    return 0;
}