#include<iostream>
#include<string>

using namespace std;

class Person
{
private:
    string security = "Security";  //c++11 feature
protected:
    string name = "John";
    int age = 25;
public:
    void display() const { cout << "Name: " << name << ", Age: " << age << endl; }
};

class Teacher : private Person
{
private:
    string teacherID = "9876543210";
public:
    void teach() { cout << name << " can teach." << endl; }
};

class CollegeTeacher : public Teacher
{
private:
    string collegeID = "CollegeID";
public:
    // void teach() { cout << name << " can teach in college." << endl; }
};

int main()
{
    Person p;
    p.display();

    Teacher t;
    t.teach();

    return 0;
}