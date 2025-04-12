---
marp: true
theme: MyGaia
paginate: true
---
<!-- _class: lead -->
# **2023年10月高等教育自学考试C++程序设计试题**
## 课程代码:04737

---

### 一、单项选择题
本大题共20小题，每小题1分，共20分。在每小题列出的备选项中只有一项是最符合题目要求的，请将其选出。

---

1. 对C++语言的描述正确的是（  ）
A. 不再演化改进
B. 前身是低级语言C
C. 不是面向用户的语言
*D. 属于高级程序设计语言*

---

2. 下列选项中可以取代语句 “namespace { int x,y; }” 的是（  ）
A. int x; int y;
B. int x,y;
*C. static int x,y;*
D. int x; y;

C++ 匿名命名空间（anonymous namespace）是一种特殊的命名空间，定义时没有指定名字 ，形式为`namespace { /* 声明内容 */ }` 。

---

- **作用域局限**：匿名命名空间中声明的变量、函数、类型等符号，作用域仅限于当前源文件，在其他源文件中不可见。比如在`file1.cpp`中匿名命名空间里声明的函数`func`，在`file2.cpp`中无法直接调用 。
- **隐式静态链接**：其中的实体具有静态链接属性，在编译时被分配固定内存地址，不会与其他文件中的同名实体冲突。
- **名字改编**：编译器会为匿名命名空间生成唯一内部名称，其中的标识符也会与该内部名称绑定，不同文件中的同名标识符因属于不同匿名命名空间（实际名字不同）而相互独立 。

---

### 与static的区别
在C++中，`static`修饰全局变量或函数也能限制其作用域在当前文件，但匿名命名空间更具优势：
- **使用便捷性**：`static`需对每个变量或函数逐个修饰；匿名命名空间只需用`namespace{}`将相关声明括起来，对于一组标识符更方便。
- **适用类型**：`static`不能修饰类等自定义复杂类型；匿名命名空间无此限制，可包含类、结构体等各种类型声明 。
 
---

3. 把v1 (int v1;)和 v2 (char v2[]= "ABCDW ")分别作为第一参数和第二参数来调用函数 f1，已知函数 f1 的原形是"void fl(int *a,char *b); "，则正确的调用语句是（  ）
A. fl(v1,v2)
*B. f1(&v1,v2)*
C. f1(v1,&v2)
D. f1(&v1,&v2)

--

4. 要发生动态绑定，则调用虚函数时应使用（  ）
A. 类名
B. 对象名
*C. 基类的指针*
D. 派生类的指针

---

5. 关于类和对象的描述不正确的是（  ）
A. 对象是类的实例
B. 类封装了数据和操作
*C. 一个类的对象只有一个*
D. 一个对象必属于某个类

---

6. 已知：p是一个指向类A数据成员m的指针，A1是类A的一个对象，如果要给m赋值为5，下列表达式正确的是（  ）
A. Al.p=5
B. Al->p=5
*C. Al.*p=5*
D. *A1.p=5

---

7. 在下列函数原型中，可以作为类Test的构造函数的是（  ）
*A. Test (int);*
B. int Test ();
C. ~Test (int);
D. void Test (int);

---

8. 对静态数据成员特性的理解不正确的是（  ）
A. 说明静态数据成员时要加static
*B. 静态数据成员不是所有对象所共有的*
C. 静态数据成员要在类体外进行初始化
D. 访问静态数据成员时，可在静态数据成员名前加类名和作用域运算符

---

9. 对运算符重载的理解不正确的是（  ）
A. 不是所有的运算符都可以进行重载
*B. 调用运算符函数必须使用关键字operator*
C. 不可以通过运算符重载创造出新的运算符
D. 运算符重载不能改变操作数的个数、运算符的优先级和结合性

---

10. 为了区别单目运算符"++"或"-"的前置式和后置式运算，在后置式运算符进行重载时，额外添加一个参数，其类型是（  ）
*A. int*
B. char
C. void
D. float

--

11. 要用派生类的对象直接访问基类的私有成员，以下观点正确的是（  ）
*A. 不可能实现*
B. 可采用保护继承
C. 可采用私有继承
D. 可采用公有继承

---

12. 关于派生类构造函数的描述不正确的是（  ）
A. 派生类构造函数通常带有成员初始化列表
*B. 派生类继承直接基类和所有间接基类的构造函数*
C. 派生类默认构造函数中隐含包括直接基类的默认构造函数
D. 派生类对象的初始化是由基类和派生类的构造函数共同完成的

---

13. 在下列选项中不属于运行时的多态的是（  ）
A. 根据if语句的求值决定程序流程
*B. 根据参数个数、类型调用重载函数*
C. 根据switch语句的求值决定程序流程
D. 根据基类指针指向对象调用成员函数

---

14. 关于虚函数的描述正确的是（  ）
A. 虚函数不具有继承性
B. 虚函数是一个成员变量
C. 静态成员函数可以声明为虚函数
*D. 在类的继承的层次结构中，虚函数是声明相同的函数*

---

15. 定义基类A，类A派生类B，类B派生类C，创建类C的对象cobj，调用顺序是（  ）
*A. 构造函数调用顺序为ABC*
B. 构造函数调用顺序为CBA
C. 析构函数调用顺序为BCA
D. 析构函数调用顺序为CAB

---

16. 在下列选项中属于流类istream的对象的是（  ）
*A. cin*
B. cerr
C. clog
D. cout

---

17. 用于清除基数格式位，设置以十六进制输出的语句是（  ）
A. cout<<setf(ios::oct);
B. cout<<setf(ios::dec,ios::basefield);
C. cout<<setf(ios::hex);
*D. cout<<setf(ios::hex,ios::basefield);*

---

18. C++程序中进行文件操作时，应包含头文件
A.  math
*B.  fstream*
C.  stdlib
D.  strstrea

---

19. 实现以读的方式打开D盘文件f1.txt的语句是
A.  ifstream infile("D:/f1.txt", ios::in);
B.  ofstream outfile("D:/f1.txt", ios::out);
*C.  ifstream infile("D:\\f1.txt", ios::in);*
D.  ofstream outfile("D:\\f1.txt", ios::out);

---

20. 设有函数：`T max(T x, T y) { return x == y ? x : y; }`，其中T为模板类型，下列相关分析正确的是
A. 该函数模板有两个模板类型参数
B.  T所规定的类型不可以是自定义类型
*C. 生成模板函数中的x和y的类型必须相同*
D. 生成模板函数的参数和返回值的类型可以不同

---

### 二、填空题
本大题共15小题，每小题1分，共15分。

---

21. 执行 “if (x ||!x) cout<<”ABC”; else cout<<”XYZ”;”，屏幕上显示的是____。
ABC

22. 函数调用语句 “aver(x+(x+y), +z,sqrt(x+a),max(x,f(y)))” 中，实参的个数是____。
4

23. 定义一个对象时，系统只为该对象的____成员开辟内存空间。
数据

---

24.  将部分成员函数声明为____，用于提供外界和这个类对象相互作用的接口，从而使得其它函数也可以访问处理该类的对象。
公有

25. 可以用____限定符强制改变访问权限，如指向常量的指针就是在非常量指针声明前使用该限定。
const

26. 利用 “对象名.成员变量” 形式访问的对象成员，仅限于类中声明为公有的成员，若要访问其他成员变量，需要通过____或者公有成员函数。 
友元函数

---

27. 若要把类FriendClass定义为类MyClass的友元类，则应在类MyClass的定义中加入语句：____。 
friend FriendClass;

28. C++流中重载了运算符<<，它是一个用于____的非成员函数。
输出

29. 若将一个二元运算符重载为类的友元函数，其形参个数应该是____个。
2

---

30. 在基类中的____成员不允许外界访问，但允许派生类的成员访问，这样既有一定的隐藏能力，又提供了开放的接口。 
保护

31. 静态成员函数对于每个类来说只有一份代码，所有对象共享这份代码，所以静态成员函数不能是____。 
虚函数

32. C++进行I/O格式控制的方式，一般有使用流操纵符、设置____和调用成员函数。 
标志字

---

33. 语句序列 “ifstream infile;infile.open("data.dat");” 的功能用一个语句实现是____。 
ifstream infile("data.dat");

34. 已知int dbl(int n){return n+n;}和long dbl(long n){return n+n;}是一个函数模板的两个实例，则该函数模板的定义是：“template<typename T> ____{}”。 
T dbl(T n)

35. 若有声明 “template <typename T>  class Tclass { /*...*/ };”，用语句 “Tclass Tobj;” 建立一个Tclass对象，则该语句出错的原因是____。 
没有实例化或没有指定实参

---

### 三、程序填空题
本大题共5小题，每小题4分，共20分。请按试题顺序和空格顺序在答题卡(纸)指定位置上填写答案，错填、不填均无分。

---

36. 将程序补充完整，使其输出:
Time:2023年10月 
C++程序设计(11)
高等教育C++程序设计自学考试

---

```cpp
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s[]={"2023年", "10月", "(1)_"};
    string c="C++程序设计";
    if(c.empty())
        cout<<"string is NULL"<<endl;
    else
        cout<<"Time:"<<_(2)<<endl;
    cout<<c<<("("<<c.size()<<")")<<endl;
    cout<<s[2].insert(8,c)<<endl;
    return 0;
}
```

---

37. 程序用来求直角三角形斜边长度，运行结果为5。
```cpp
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    double x,y;
    __(1)
public:
    Point(double i=0,double j=0){x=i;y=j;}
    Point(Point &p){x=p.x;y=p.y;}
};
```

---

```cpp
class Line
{
private:
    Point p1,p2;
public:
    Line(Point &xp1, Point &xp2):p1(xp1),p2(xp2){}
    double GetLength()
    {
        double dx=p2.x-p1.x;
        double dy=p2.y-p1.y;
        return sqrt(dx*dx+dy*dy);
    }
};
```

---

```cpp
int main()
{
    Point L1,L2(3,4); //两条直角边的长度
    Line L3(L1,L2);
    cout<<_(2)<<endl;
    return 0;
}
```

---

38. 以下程序输出hello!hello!，请将程序补充完整。
```cpp
#include <iostream>
using namespace std;
class str
{
private:
    char *st;
public:
    str(char *a){ set(a); }
    (1)
    {
        set(a.st);
        return *this;
    }
    void show(){cout<<st<<"!";}
    void set(char *s)
    {
        st=new char[strlen(s)+1];
        strcpy(st,s);
    }
};
```

---

```cpp
int main()
{
    str s1("hello"),s2("world");
    ___(2)
    s1.show();s2.show();
}
```
39. 以下程序输出name:D Class Derived=80，请将程序补充完整。
```cpp
#include <iostream>
using namespace std;
class Base
{
public:
    Base(const char *n){strcpy(name,n);}
};
```

---

```cpp
class (2)
{
public:
    Derived(const char *nm):Base(nm){}
    void show();
};
void Derived::show(){ cout<<"name:"<<name; }
int main()
{
    Derived d1("D");
    d1.show();
    cout<<" Class Derived="<<sizeof(Derived)<<endl;
}
```

---

40. 以下程序输出23,10.1,c，请将程序补充完整。
```cpp
#include <iostream>
using namespace std;
template <typename AT>
(1)
{
    return (x>y)?x:y;
}
int main()
{
    int i1=20,i2=23;
    double d1=10.1,d2=4.1;
    char c1='a',c2='c';
    cout<<max1(i1,i2)<<",";
    cout<<max1(c1,c2)<<endl;
}
```

---

### 四、程序分析题
本大题共5小题，每小题6分，共30分。阅读程序后，填写程序的正确运行结果。

---

41. 
```cpp
#include<iostream>
using namespace std;
class Time
{
public:
    Time(int h, int m){hours=h; minutes=m;}
    void Time12();
    friend void Time24(Time time);
private:
    int hours, minutes;
};
void Time::Time12()
{
    if(hours>12) cout<<hours-12<<":"<<minutes<<"PM=";
    else cout<<hours<<":"<<minutes<<"AM=";
}
void Time24( Time time){ cout<<time.hours<<":"<<time.minutes<<"in";}
int main()
{
    Time T1(23,30), T2(10,45);
    T1.Time12();
    Time24(T1);
    T2.Time12();
    Time24(T2);
}
```

---

42. 
```cpp
#include<iostream>
using namespace std;
class data
{
    int x;
public:
    data(int X){data::x=x;cout<<"class data"<<endl;}
};
class School
{
    data d1;
public:
    School(int x):d1(x){cout<<"School"<<endl;}
};
class Course:public School
{
    data d2;
public:
    Course(int x):School(x),d2(x){cout<<"Course"<<endl;}
};
class Score:public Course
{
public:
    Score(int x):Course(x){cout<<"Score"<<endl;}
};
int main()
{
    Score obj(1);
}
```

---

43. 
```cpp
#include<iostream>
using namespace std;
class Math
{
protected:
    int k;
public:
    Math(int n=5):k(n){cout<<k<<endl;}
    ~Math(){cout<<"Math";}
    virtual void f() const=0;
};
inline void Math::f()const{ cout<<k-3<<endl; }
class Add:public Math
{
public:
    ~Add(){cout<<"Add";}
    void f() const
    {
        cout<<k+3<<endl;
        Math::f();
    }
};
int main()
{
    Math &p=* new Add;
    p.f();
    delete &p;
    return 0;
}
```

---

44. 
```cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x=10.456;
    cout<<showpos<<x<<endl;
    cout<<"10(十六)="<<hex<<(int)x<<endl;
    cout.width(10);cout.fill('#');cout<<x<<endl;
    cout.setf(ios::left);cout<<x<<endl;
    cout.setf(ios::scientific);cout<<x<<endl;
    cout.put('a'+25);
    return 0;
}
```

---

45. 
```cpp
#include <iostream>
using namespace std;
class Complex
{
private:
    double realPart, imagePart;
public:
    Complex(double real=0,double image=0):realPart(real),imagePart(image){}
    Complex operator-(const Complex &a) const{
    return Complex(realPart - a.realPart, imagePart - a.imagePart); 
    }
    void Show() const{ 
    cout << realPart << "+" << imagePart << "i" << endl;
    }
};
```

---

```cpp
int main()
{
    Complex a(8, 7), b(6, 5), c;
    c = a - b;
    cout << "a=";a.Show( );
    cout << "b=";b.Show( );
    cout << "c=";c.Show( );
    return 0;
}
```

---

### 五、程序设计题

本大题共2小题，第46小题5分，第47小题10分，共15分。

46. 已定义类 Figure 和 main 函数，main 函数中调用派生类函数 showarea () 的不同实现版本，求得直角三角形和矩形的面积。请编写此程序的派生类 Triangle 和 Square。

---

```cpp
class Figure
{
protected:
    double x,y;
public:
    void set(double i, double j=0) { x=i; y=j; }
    virtual void showarea()const = 0;
};

int main()
{
    Triangle t;
    Square s;
    t.set(10.48,50);
    t.showarea();
    s.set(888,100);
    s.showarea();
}
```
---

47. 文件data.txt中存放大量整数，输入要读取的整数的个数，打开该文件并在屏幕上显示读取结果，再对这些整数从小到大排序，将排序结果存入res.txt文件。
