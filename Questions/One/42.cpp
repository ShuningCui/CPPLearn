#include<iostream>
using namespace std;

class Data
{
    int x;
public:
    Data(int X) { Data::x = x;cout << "class Data" << endl; }
};
class School
{
    Data d1;
public:
    School(int x) :d1(x) { cout << "School" << endl; }
};
class Course :public School
{
    Data d2;
public:
    Course(int x) :School(x), d2(x) { cout << "Course" << endl; }
};
class Score :public Course
{
public:
    Score(int x) :Course(x) { cout << "Score" << endl; }
};
int main( )
{
    Score obj(1);
}