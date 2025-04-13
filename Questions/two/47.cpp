#include <iostream>
#include <cstring>
using namespace std;

class stud
{
private:
    char name[20];
    int englishScore;
    int cppScore;

public:
    // 构造函数
    stud(const char* n, int eng, int cpp)
    {
        strcpy(name, n);
        englishScore = eng;
        cppScore = cpp;
    }

    // 读出函数
    void get(char* n, int& eng, int& cpp) const
    {
        strcpy(n, name);
        eng = englishScore;
        cpp = cppScore;
    }

    // 写入函数
    void put(const char* n, int eng, int cpp)
    {
        strcpy(name, n);
        englishScore = eng;
        cppScore = cpp;
    }

    // 求平均成绩函数
    double getAverageScore( ) const
    {
        return (englishScore + cppScore) / 2.0;
    }

    // 显示函数
    void show( ) const
    {
        cout << name << "，英语成绩：" << englishScore << "，C++成绩：" << cppScore
            << "，平均成绩：" << getAverageScore( ) << endl;
    }
};

int main( )
{
    char p[20];
    int a, b;
    stud st1("LiLei", 70, 95);
    st1.get(p, a, b);
    st1.put(p, a, b);
    cout << "st1 的数据为：";
    st1.show( );
    return 0;
}
