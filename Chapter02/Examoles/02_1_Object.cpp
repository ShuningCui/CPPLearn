#include <iostream>
using namespace std;
class Date
{
    int day, month, year;
public:
    void init(int, int, int); // 初始化数据成员
    void print_ymd();
    void print_mdy();
};

// 内联函数
inline void Date::init(int yy, int mm, int dd)
{
    month = (mm >= 1 && mm <= 12) ? mm : 1;
    year = (yy >= 1900 && yy <= 2100) ? yy : 1900;
    day = (dd >= 1 && dd <= 31) ? dd : 1;
}
void Date::print_ymd()
{
    cout << year << "-" << month << "-" << day << endl;
}
void Date::print_mdy()
{
    cout << month << "-" << day << "-" << year << endl;
}

int main()
{
    Date date1, date2;
    date1.print_ymd();       // 未初始化时的情况
    date1.init(2006, 3, 28); // 正确的初始化数据
    date1.print_ymd();
    date1.print_mdy();
    date2.init(2006, 13, 38); // 错误的初始化数据
    date2.print_ymd();
    date2.print_mdy();

    date2 = date1; // 赋值操作
    date2.print_ymd();
    //point
    Date* pDate = new Date;
    pDate->init(2006, 3, 28);   // 正确的初始化数据
    pDate->print_ymd();
    pDate->print_mdy();
    delete pDate;

    return 0;
}
