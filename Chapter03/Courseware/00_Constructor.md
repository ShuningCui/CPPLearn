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
# **构造函数**

---

### **基本特性**
在C++里，构造函数是一种特殊的成员函数，其主要作用是在创建对象时对*对象进行初始化*。

- **函数名**：构造函数的名称与类名相同。
- **无返回类型**：构造函数没有返回类型，也不能声明为 `void`。
- **自动调用**：在创建类的对象时，构造函数会被自动调用。

---

### **默认构造函数**
+ 默认构造函数是指不需要任何参数的构造函数。如果类中没有显式定义任何构造函数，编译器会*自动提供一个默认构造函数*，该构造函数不执行任何操作。
+ 一旦你在类中定义了其他构造函数，编译器就不会再提供默认构造函数。示例如下：
```cpp
class Example {
public:
    // 显式定义的默认构造函数
    Example() {
    }
};
```

---

### **带参数的构造函数**
带参数的构造函数允许在创建对象时传入参数，从而对对象进行特定的初始化。
```cpp
class Point {
private:
    int x;
    int y;
public:
    Point(int a, int b) {
        x = a;
        y = b;
    }
};
```

---

可以使用如下方式创建对象：
```cpp
Point p(1, 2);

Point* pp = new Point(2,3);

```

---

### **拷贝构造函数**
拷贝构造函数用于创建一个新对象，该对象是另一个同类型对象的副本。如果类中*没有*显式定义拷贝构造函数，*编译器会提供一个默认的拷贝构造函数*，它会逐成员地*复制对象的数据*。
```cpp
class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(const Rectangle& other) {
        width = other.width;
        height = other.height;
    }
};
```

---

### **使用拷贝构造函数**

```cpp
Rectangle r1(3, 4);
Rectangle r2(r1);
```
注意区分：

```cpp
Rectangle r1(3,4)
Rectangle r2;
r2=r1;
```

---

### **委托构造函数**
C++11 引入了委托构造函数的概念，允许一个构造函数调用同一个类的其他构造函数，以减少代码重复。

```cpp
class Circle {
private:
    double radius;
public:
    // 主构造函数
    Circle(double r) : radius(r) {}
    // 委托构造函数
    Circle() : Circle(0.0) {}
};
```

---

### **构造函数的作用**
- **初始化成员变量**：构造函数可以确保对象在创建时其成员变量被正确初始化，避免使用未初始化的变量。
- **资源分配**：构造函数可以用于分配资源，例如动态内存分配、打开文件等。
- **构造函数重载**：一个类可以有多个构造函数，只要它们的参数列表不同，这被称为构造函数重载。
