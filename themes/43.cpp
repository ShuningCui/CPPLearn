#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main( )
{
    double score = 90.657;
    int id = 202404;
    string course = "C++程序设计";
    cout.width(10);
    cout << course << endl;
    cout << setw(10) << setfill('0') << id << endl;
    cout << "最终分数为：" << setprecision(3) << score << endl;
}