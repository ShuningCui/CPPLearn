---
marp: true
theme: MyGaia
paginate: true
---

<!-- _class: lead -->
# **2024年4月高等教育自学考试C++程序设计试题**
## 课程代码:04737

---

### 一、单项选择题
本大题共20小题，每小题1分，共20分。在每小题列出的备选项中只有一项是最符合题目要求的，请将其选出。

---

1.要建立良好的程序设计风格，描述正确的是
A.无需给程序添加注释
B.变量命名只要符合语法
C.首先考虑程序的执行效率
*D.程序应清晰、可读性好*

---

2.下列使用const的语句中，不正确的是
*A.const int* a=&a;*
B.const int buffer=168;
C.const double* p=&a;
D.double* const p=&a;

---

3.关于类定义格式的描述，不正确的是
A.一般类中包含数据成员和成员函数
B.一般类的定义格式分为说明部分和实现部分
C.类中成员有公有、私有、保护三种访问数据
*D.成员函数都应是公有的，数据成员都应是私有的*

---

4.关于对象的描述，不正确的是
A.一个对象在定义时就被初始化
B.对象的成员表示与C语言中结构变量的成员表示相同
C.一个类可以定义多个对象、指向对象的指针和对象数组
*D.同一个类创建的若干对象的数据结构和内容都是不同的*

---

5.假定一个类的构造函数为A(int aa,int bb){a=aa++;b=a*++bb;},则执行“A x(4,5);”语句后，x.a和x.b的值分别为
A.4和5 
B.4和20
*C.4和24*
D.20和5

---

6.对于常量对象，C++遵循
A.其成员都是常量成员
B.可调用所有成员函数
*C.可调用常量成员函数*
D.可调用任何不改变对象值的成员函数

---

7.下列关于this指针的描述，正确的是
A.所有函数都有this指针
B.所有类的成员函数都有this指针
C.与类相关的所有函数都有this指针
*D.只有类的非静态成员函数有this指针*

---

8.在重载一个运算符函数时，其参数表中没有任何参数，说明该运算符是
*A.一元成员运算符*
B.一元非成员运算符
C.二元成员运算符
D.二元非成员运算符

---

9.重载运算符“=”时，应该注意的是
A.函数不能返回引用
B.可用友元运算符重载
C.不要支持连续使用
*D.必须用成员函数重载*

---

10.下列对派生类的描述不正确的是
A.至少有一个基类
B.可以作为另一个派生类的基类
C.包含了基类的所有成员变量
*D.继承的基类成员的访问权限不变*

---

11.假设已有定义“class derived:private student{//………….;”,其中derived、
private、student分别代表
*A.派生类名、继承方式、基类名*
B.基类名、继承方式、派生类名
C.继承方式、基类名、派生类名
D.派生类名、基类名、继承方式

---

12.让派生类D的指针pD指向基类B的对象oB的语句是
A.pD=*oB;
B.pD=(B*)&oB;
C.pD=&oB;
*D.pD=(D*)&oB;*

---

13.所谓多态性是指
A.同样的语句相同的执行效果
*B.不同的对象调用相同名称的函数*
C.不同的语句相同的执行效果
D.不同的对象调用不同名称的函数

---

14.下面关于虚函数的描述，正确的是
*A.可以是静态成员*
B.只能是非成员函数
C.一般不声明为内联函数
D.友元函数可以定义为虚函数

---

15.在下列虚基类的声明中，正确的是
A.class virtual B:public A 
*B.class B:virtual public A*
C.class B:public A virtual 
D.virtual class B:public A

--
#### 虚继承是 C++ 中用于解决菱形继承问题的一种机制
虚继承就是为了解决菱形继承的二义性和数据冗余问题而引入的。在继承时使用 `virtual` 关键字修饰基类，就可以让该基类成为虚基类，派生类只会保留一份虚基类的成员。以下是使用虚继承解决菱形继承问题的示例代码：

---

```cpp
#include <iostream>
// 基类 A
class A {
public:
    int value;
};
// 派生类 B 虚继承自 A
class B : virtual public A {};
// 派生类 C 虚继承自 A
class C : virtual public A {};
// 派生类 D 继承自 B 和 C
class D : public B, public C {};
int main() {
    D d;
    // 现在不会产生二义性，因为 D 中只有一份 A 的成员
    d.value = 10;
    return 0;
}
```

---

16.使用setw()格式操纵符需要包含头文件
A.stdlib.h 
B.fstream.h
*C.iomanip.h*
D.iostream.h

---

17.已知：“int a=5;char c='a';”,则输出语句“cout<<c+1<<a<<c;”的显示结果是
A.65a 
*B.985a*
C.98'5'a 
D.65'a'

---

18.用二进制模式以写入方式打开一磁盘文件的模式标记是
A.ios:in 
B.ios::out
*C.ios::in|ios::binary*
D.ios::out|ios::binary

---

19.有模板说明：template<typename T>,则T在函数模板中
*A.不能作为函数模板名*
B.不能作为函数参数类型
C.不能作为函数返回类型
D.不能作为函数中的变量类型

---

20.下列有关模板的描述，不正确的是
*A.类模板与类是同一层次的抽象*
B.模板把数据类型作为一个设计参数
C.类模板需要一种或多种类型参数
D.类模板是对不同类的公共性质的抽象

---

21.函数“int f(char*x){char*y=x;while(*y++);return(y-x-1);}”用于求字符串的_______。
长度

22.执行代码“string str("NihaoC++");cout<<str substr(5,3);”的输出结果是_______。
C++

23.属性是指描述_______的静态特征的数据项，如考生的考号、姓名等。
对象

---

24.面向对象程序设计将数据和_______放在一起，作为相互依存、不可分割的整体处理。
操作

25.构造函数是一种成员函数，它的名称与其_______相同。
类名

26.在类TClass的定义中有语句“friend A_Class;”,说明把类_______定义为类TClass
的友元类。
A_Class

---

27.设delete是要重载的运算符，那么重载运算符的函数名是_______。
operator delete

28.类的定义“class B{int b1,b2;};class D:public B{int d;};”中私有成员变量有_______个。
3

29.类A是类B的基类，类B是类C的基类，则类C的对象既是类B中的一员，也是类A中的一员，即“is a”关系具有_______性。
传递

---

30.静态多态和动态多态的区别在于将函数实现和函数_______关联起来的阶段不同。
调用

31.补全“vft()”函数的定义，使其能成为基类中的纯虚函数：virtual void vft()_______。
=0

32.语句“cout<<endl<<x;”中，“endl”的作用是_______。
换行

---

33.类ifstream是从类_______中派生而来的，因此ifstream拥有该类的全部成员函数。
istream

34.模板参数表的写法和_______列表的写法相似，形式是“类型 参数名，……”。
函数形参

35.使用泛型数据类型替代实际的数据类型来说明成员变量，从而定义一个泛型类，这相当于定义一个_______。
类的模板

---

### 程序填空题

---
36. 以下程序输出 2024，请将程序补充完整。

```cpp
#include <iostream>
using namespace std;
______（1）______  //定义命名空间 ns
{
    int x = 24;
}
int main()
{
    int x = 20;
    cout << x;
    cout << ______（2）______; //引用命名空间 ns
}
``` 

---

37. 以下程序输出 “98 分”，请将程序补充完整。

```cpp
#include <iostream>
using namespace std;
class Test {
private:
    int n;
public:
    Test(int i = 9) { n = i; }
    int Get() { return n; }
    int Get() const { ______（1）______; }
};
int main()
{
    ______（2）______;
    const Test b(10);
    cout << a.Get() << b.Get() << "分" << endl;
}
``` 

---

38. 按要求完成类的定义：“姓名”和“性别”是教师、学生共有的属性，“年级”和“成绩”是学生特有的属性。

```cpp
class person {
public:
    ______（1）______
};
class teacher : public person {
private:
    char title[20]; double salary;
};

class student : ______（2）______ {
private:
    char grade[20];
    int score;
};
``` 

---

39. 请将程序补充完整，使其输出结果为：
2024年4月
C++程序设计自学考试

```cpp
#include <iostream>
using namespace std;
class A {
public:
    A() { cout << "2024年"; }
    ~A() { cout << "自学考试" << endl; }
};
class B : A {
public:
    B() { ______（1）______;}
    ~B() { ______（2）______;}
};
int main()
{  B obj;  }
``` 

---

40. 将程序补充完整，使其运行结果为：
输出 1:1008
输出 2:883

```cpp
#include <iostream>
using namespace std;
class A {
public:
    A(int a = 135) { m_a = a; }
    int get() { return m_a++; }
private:
    int m_a;
};
______（1）______ { return a1.get() + a2.get() - 15; }
int main()
{
    A a1(888), a2, a3 = 9;
    cout << "输出 1:" << a1 + a2 << endl;
    ______（2）______;
}
``` 

---

### 程序分析题

---
41
```cpp
#include<iostream>
using namespace std;
class Myclass {
private:
    int *x;
public:
    Myclass(int a);
    ~Myclass();
};
Myclass::Myclass(int a) {
    x = new int(a);
    cout << "调用构造函数" << endl;
}
Myclass::~Myclass() {
    cout << "调用析构函数" << endl;
    delete x;
}
int main() {
    Myclass p(1);
}
```

---
42
```cpp
#include<iostream>
using namespace std;
class x {
protected:
    int a;
public:
    x() { a = 1; }
};
class x1 : virtual public x {
public:
    x1() { a += 1; cout << "x1:" << a << ","; }
};
class x2 : virtual public x {
public:
    x2() { a += 2; cout << "x2:" << a << ","; }
};
class y : public x1, public x2 {
public:
    y() { cout << "y:" << a << endl; }
};
int main() {
    y obj;
}
```

---

43
```cpp
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main() {
    double score = 90.657;
    int id = 202404;
    string course = "C++程序设计";
    cout.width(10);
    cout << course << endl;
    cout << setw(10) << setfill('0') << id << endl;
    cout << "最终分数为：" << setprecision(3) << score << endl;
}
``` 

---

44
```cpp
#include <iostream>
using namespace std;
class Sample {
    int n;
    static int sum;
public:
    Sample(int x) { n = x; }
    void add() { sum += n; }
    void disp() { cout << "n=" << n << ",sum=" << sum << endl; }
};
int Sample::sum = 0;

int main() {
    Sample a(2), b(3), c(5);
    a.add(); a.disp();
    b.add(); b.disp();
    c.add(); c.disp();
}
``` 

---

45
```cpp
#include <iostream>
using namespace std;

template <typename T>
class List {
public:
    List(T x = 0) { data = x; }
    void append(List *node) { node->next = this; next = NULL; total++; }
    List *getnext() { return next; }
    T getdata() { return data; }
    static int total;
private:
    T data;
    List *next;
};

template <typename T> int List<T>::total = 0;

int main() {
    int i, n = 5;
    List<int> headnode; 
    List<int> *p, *last;
    last = &headnode;
    for (i = 1; i <= n; i++) {
        p = new List<int>(i * 2);
        p->append(last);
        last = p;
    }
    p = headnode.getnext();
    while (p) {
        cout << p->getdata() << " ";
        p = p->getnext();
    }
    cout << endl;
    cout << "total=" << List<int>::total << endl;
}
``` 

---

46
### 题目内容
编写程序将 C 盘文件 `f1.txt` 内容复制到 D 盘文件 `f2.txt`。要求：文件的读写使用函数 `read`、`write`，且每次读写一个字符。

---

47
### 题目
定义一个描述学生情况的类 `stud`，数据成员有姓名、英语成绩、C++成绩，成员函数有构造函数、写入函数、读出函数、求平均成绩函数、显示函数。最终构成一个完整的程序，测试数据成员与成员函数的正确性。
```cpp
int main()
{
    char p[20];
    int a, b;
    stud st1("LiLei", 70, 95);
    st1.get(p, a, b);
    st1.put(p, a, b);
    cout << "st1 的数据为：";
    st1.show();
}
```