---
marp: true
theme: gaia
paginate: true
---
<style>
   em{
        font-style: normal;
        font-weight: bold;
        color: purple;
   }
</style>

<!-- _class: lead -->
# **静态成员**

---

### **静态成员**
+ 每当说明一个某类的对象时，系统为该对象分配一块内存用来存放类中的所有成员。也就是说，在每一个对象中都存放有其所属类中所有成员的拷贝。
+ 但在有些应用中，希望程序中同类对象*共享某个数据*。
+ 解决办法是将所要共享的数据说明成类的*静态成员*。

---

### **关键字static**
+ 类中用关键字static修饰的数据成员叫做静态数据成员。
```cpp
class MyClass
{	
public:
   int x;
	static int Count;
};

int	MyClass::Count=0;
```

---

### **使用**
```cpp
MyClass	MemberX, MemberY;
```

+ 类MyClass中有两个数据成员x和Count，前者为普通数据成员，在对象MemberX和MemberY中都存在有各自的该数据成员的副本；
+ 后者为静态数据成员，所有类MyClass对象中的该成员实际上是*同一个变量*。
+ 在使用含静态数据成员之前，*必须对静态数据成员进行定义性说明*，同时对其初始化。
+ 既可以使用`类名::静态成员`，也可以`对象名.静态成员`

---

### **静态成员函数**
与数据成员一样，*成员函数也可以被说明成静态的*。
```cpp
class MyClass
{	public:
	static int sfunc()；
};
int MyClass:: sfunc(){…}
```

----

### **注意问题**
+ 静态成员函数与其他成员函数一样，也可以说明为内联的，但不得说明为虚函数。
+ 静态成员函数*只能直接访问类中的静态成员*，如果要访问类中的非静态成员时，必须借助对象名或指向对象的指针。
+ 一个类中所有非静态成员函数均可以直接访问静态的和非静态的数据成员。通常，如果类中有静态数据成员，则将访问该成员的函数说明成静态的。
