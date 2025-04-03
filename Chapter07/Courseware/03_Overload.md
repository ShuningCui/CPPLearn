---
marp: true
theme: MyGaia
paginate: true
---
<!-- _class: lead -->
# **输入输出的重载**

---

### **概述**
+ 在 C++ 里，通过对 `istream` 的流读取运算符 `>>` 和 `ostream` 的流插入运算符 `<<` 进行重载，能够实现自定义对象的输入输出操作。
+ 由于istream类和ostream类是c++的标准库类，因此重载时应该选择全局重载

---

### **重载流读取运算符 `>>`**

重载 `>>` 运算符的目的是让 `istream` 对象（像 `cin`）能够读取自定义对象的数据。重载函数一般是一个非成员函数（友元函数），其第一个参数为 `istream&` 类型，第二个参数为自定义对象的引用类型。

---

### **示例代码**
```cpp

class Point {
private:
    int x;
    int y;
public:
    // 声明友元函数
    friend istream& operator>>(istream& is, Point& p);
    // 显示点的信息
    void display() const {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};
```

---

### **示例代码**

```cpp
// 重载 >> 运算符
istream& operator>>(istream& is, Point& p) {
    cout << "请输入点的 x 和 y 坐标，用空格分隔: ";
    is >> p.x >> p.y;
    return is;
}
int main() {
    Point p;
    cin >> p;
    p.display();
    return 0;
}
```

---

### **代码解释**
- **类的定义**：`Point` 类包含两个私有成员 `x` 和 `y`，代表点的坐标。
- **友元函数声明**：在 `Point` 类中声明 `operator>>` 为友元函数，这样它就能访问 `Point` 类的私有成员。
- **重载 `>>` 运算符**：`operator>>` 函数接收一个 `istream` 引用和一个 `Point` 对象的引用，从输入流中读取 `x` 和 `y` 的值，并返回输入流对象。
- **主函数**：创建一个 `Point` 对象 `p`，使用 `cin >> p` 调用重载的 `>>` 运算符进行输入，最后调用 `display` 方法显示点的信息。

---

### **重载流插入运算符 `<<`**

重载 `<<` 运算符的作用是让 `ostream` 对象（如 `cout`）能够输出自定义对象的数据。重载函数通常也是一个非成员函数（友元函数），其第一个参数为 `ostream&` 类型，第二个参数为自定义对象的常量引用类型。

---

### **示例代码**
```cpp
class Point {
private:
    int x;
    int y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    // 声明友元函数
    friend ostream& operator<<(ostream& os, const Point& p);
};
```

---

### **示例代码**

```cpp
// 重载 << 运算符
ostream& operator<<(ostream& os, const Point& p) {
    os << "Point(" << p.x << ", " << p.y << ")";
    return os;
}
int main() {
    Point p(3, 4);
    cout << p << endl;
    return 0;
}
```

---

### **代码解释**

- **类的定义**：`Point` 类包含两个私有成员 `x` 和 `y`，并提供了一个构造函数用于初始化。
- **友元函数声明**：在 `Point` 类中声明 `operator<<` 为友元函数，使其可以访问 `Point` 类的私有成员。
- **重载 `<<` 运算符**：`operator<<` 函数接收一个 `ostream` 引用和一个 `Point` 对象的常量引用，将点的信息输出到输出流中，并返回输出流对象。
- **主函数**：创建一个 `Point` 对象 `p`，使用 `cout << p` 调用重载的 `<<` 运算符进行输出。

---

### **总结**
通过重载 `>>` 和 `<<` 运算符，可以让自定义对象像内置类型一样进行输入输出操作，提高了代码的可读性和可维护性。在重载时，通常将这两个函数声明为友元函数，以便访问类的私有成员。 