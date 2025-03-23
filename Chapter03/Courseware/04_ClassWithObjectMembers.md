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
# **封闭类**

---

### **定义**

封闭类指的是包含对象成员的类，也就是类的成员变量中包含其他类的对象。这种类的设计方式体现了面向对象编程中的组合关系，即一个类由其他多个类的对象组合而成。

---
### **例子**
```cpp
class Tire {
    // 轮胎类的定义
};
class Engine {
    // 发动机类的定义
};
class Car {
    Tire tires[4]; // 包含4个轮胎对象
    Engine engine; // 包含一个发动机对象
    // 其他成员
};
```
在这个例子中，`Car`类就是封闭类，因为它包含了`Tire`类和`Engine`类的对象。

---

### **构造和析构过程**
封闭类对象的构造和析构过程遵循特定的顺序：
- **构造顺序**：创建封闭类对象时，*先调用对象成员的构造函数*，再调用封闭类自身的构造函数。如果对象成员有多个，按照它们在类中*声明的顺序依次调用*构造函数。
- **析构顺序**：销毁封闭类对象时，先调用封闭类自身的析构函数，再调用对象成员的析构函数。对象成员的析构顺序与构造顺序相反。

---

### **示例**：
```cpp
class A {
public:
    A() { std::cout << "A's constructor" << std::endl; }
    ~A() { std::cout << "A's destructor" << std::endl; }
};
class B {
public:
    B() { std::cout << "B's constructor" << std::endl; }
    ~B() { std::cout << "B's destructor" << std::endl; }
};
class C {
    A a;
    B b;
public:
    C() { std::cout << "C's constructor" << std::endl; }
    ~C() { std::cout << "C's destructor" << std::endl; }
};
```

---

### **示例**

```cpp
int main() {
    C c;
    return 0;
}
```
上述代码的输出结果为：
```
A's constructor
B's constructor
C's constructor
C's destructor
B's destructor
A's destructor
```

---

### **初始化列表的使用**
若对象成员的构造函数需要参数，封闭类的构造函数就*必须在初始化列表中为对象成员的构造函数提供参数*。
```cpp
class Point {
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {std::cout << "Point constructor" << std::endl;}
};
class Rectangle {
    Point topLeft;
    Point bottomRight;
public:
    Rectangle(int x1, int y1, int x2, int y2) : topLeft(x1, y1), bottomRight(x2, y2) {
        std::cout << "Rectangle constructor" << std::endl;
    }
};
```

---

### **示例**
```cpp
int main() {
    Rectangle rect(1, 2, 3, 4);
    return 0;
}
```
在这个例子中，`Rectangle`类的构造函数通过初始化列表为`Point`类对象`topLeft`和`bottomRight`的构造函数传递参数。

---

### **优点**
- **代码复用**：通过组合其他类的对象，避免了代码的重复编写，提高了代码的复用性。
- **模块化设计**：有助于实现模块化设计，每个类可以专注于自己的功能，降低了代码的耦合度，提高了代码的可维护性。

---

### **缺点**
- **对象创建和销毁开销**：由于封闭类包含多个对象成员，创建和销毁封闭类对象时需要调用多个构造函数和析构函数，会增加一定的时间和空间开销。
- **复杂性增加**：当对象成员较多或嵌套层次较深时，代码的复杂性会增加，理解和维护的难度也会相应提高。

