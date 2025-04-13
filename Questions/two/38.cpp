//38. 按要求完成类的定义：
//“姓名”和“性别”是教师、学生共有的属性，
//“年级”和“成绩”是学生特有的属性。

class person
{
public:
    char name[20];
    char gender;
};
class teacher : public person
{
private:
    char title[20]; double salary;
};

class student : public person
{
private:
    char grade[20];
    int score;
};