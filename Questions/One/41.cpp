#include<iostream>
using namespace std;
class Time
{
public:
    Time(int h, int m) { hours = h; minutes = m; }
    void Time12( );
    friend void Time24(Time time);
private:
    int hours, minutes;
};
void Time::Time12( )
{
    if (hours > 12) cout << hours - 12 << ":" << minutes << "PM=";
    else cout << hours << ":" << minutes << "AM=";
}
void Time24(Time time) { cout << time.hours << ":" << time.minutes << "\n"; }
int main( )
{
    Time T1(23, 30), T2(10, 45);
    T1.Time12( );
    Time24(T1);
    T2.Time12( );
    Time24(T2);
}