/* 36. 将程序补充完整，使其输出:
Time:2023年10月
C++程序设计(11)
高等教育C++程序设计自学考试 */

#include <iostream>
#include <cstring>
using namespace std;
int main( )
{
    string s[] = { "2023年", "10月", "高等教育自学考试" }; //第1个空
    string c = "C++程序设计";
    if (c.empty( ))
        cout << "string is NULL" << endl;
    else
        cout << "Time:" << s[1] + s[2] << endl; //第2个空
    cout << c << "(" << c.size( ) << ")" << endl;
    cout << s[2].insert(12, c) << endl;
    return 0;
}