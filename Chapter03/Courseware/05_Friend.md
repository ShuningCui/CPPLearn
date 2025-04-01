---
marp: true
theme : gaia
paginate : true
---
<style>
em{
     font-style: normal;
     font-weight: bold;
     color: purple;
}
</style>

<!--_class: lead-->
# **友元**

---

### **基本概念**
+ 在C++里，友元（Friend）是一种突破类访问控制权限的机制，它能够让特定的函数或者类访问某个类的私有和受保护成员。
+ 友元不是面向对象的一部分。
+ 友元的声明有友元函数、友元类。

---

### **友元函数**

友元函数是在类外部定义的普通函数，但通过在类中声明该函数为友元函数，这个函数就可以访问该类的私有和受保护成员。
```cpp
class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    // 声明友元函数
    friend int area(const Rectangle& rect);
};
```

---

### **友元函数的定义**

```cpp
int area(const Rectangle& rect) {
    return rect.width * rect.height;
}

int main() {
    Rectangle rect(5, 3);
    std::cout << "The area of the rectangle is: " << area(rect) << std::endl;
    return 0;
}
```

---

### **代码解释**
- 在`Rectangle`类中，`width`和`height`是私有成员。
- `area`函数在`Rectangle`类中被声明为友元函数，所以`area`函数能够访问`Rectangle`对象的私有成员`width`和`height`。
- 在`main`函数里，创建了`Rectangle`对象`rect`，并调用`area`函数计算其面积。
- *特别注意*：函数`area`*不是*类`Rectangle`的成员函数，它不属于任何类，是一个普通的全局函数。

---

### **友元类**
友元类指的是一个类被另一个类声明为友元，那么这个友元类中的所有成员函数都可以访问被声明类的私有和受保护成员。
```cpp
class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    // 声明友元类
    friend class Square;
};
```

---

### **示例**
```cpp
class Square {
public:
    void printRectangleArea(const Rectangle& rect) {
        std::cout << "The area of the rectangle is: " << rect.width * rect.height << std::endl;
    }
};

int main() {
    Rectangle rect(4, 6);
    Square sq;
    sq.printRectangleArea(rect);
    return 0;
}
```

---

### **代码解释**
- `Rectangle`类把`Square`类声明为友元类。
- `Square`类的成员函数`printRectangleArea`能够访问`Rectangle`对象的私有成员`width`和`height`。
- 在`main`函数中，创建了`Rectangle`对象`rect`和`Square`对象`sq`，并调用`sq`的`printRectangleArea`函数输出`rect`的面积。

---

### **使用注意事项**
- **破坏封装性**：友元机制*打破了类的封装性原则*，因为它允许外部函数或类访问类的私有和受保护成员。所以在使用时要谨慎，*避免过度使用*导致代码的可维护性和安全性降低。
- **单向性**：友元关系是单向的。若类A是类B的友元，并不意味着类B是类A的友元。
- **不具有传递性**：若类A是类B的友元，类B是类C的友元，这并不代表类A是类C的友元。
 