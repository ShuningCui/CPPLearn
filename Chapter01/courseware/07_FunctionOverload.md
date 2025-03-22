---
marp: true
theme: gaia
paginate: true
---

<!-- _class: lead -->
# **函数重载**

---

### **基本概念**
+ 在C++里，函数重载是一种重要特性，它允许在同一作用域内<font color=purple>**定义多个同名函数**，</font>但这些函数的参数列表<font color=purple>**必须**</font>有所不同。
+ 函数重载让你可以使用<font color=purple>**相同的函数名来实现不同的功能**，</font>只要函数的参数数量、类型或者顺序存在差异即可。
+ 编译器会<font color=purple>**依据调用函数时传入的实参类型和数量**，</font>来决定调用哪个重载版本。

---

### **示例代码**
```cpp
// 计算两个整数的和
int add(int a, int b) {
    return a + b;
}
// 计算两个双精度浮点数的和
double add(double a, double b) {
    return a + b;
}
// 计算三个整数的和
int add(int a, int b, int c) {
    return a + b + c;
}
```
---

### **函数调用**
```cpp
int main() {
    int result1 = add(1, 2);
    double result2 = add(1.5, 2.5);
    int result3 = add(1, 2, 3);

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    std::cout << "Result 3: " << result3 << std::endl;

    return 0;
}
```

---

### **函数重载的规则**

- **参数列表不同**：这是函数重载的关键条件。可以是<font color=purple>**参数的类型**</font>不同，如上述示例中的 `int` 和 `double`；也可以是<font color=purple>**参数的数量**</font>不同，像 `add(int a, int b)` 和 `add(int a, int b, int c)`；还可以是<font color=purple>**参数的顺序**</font>不同。
```cpp
// 参数顺序不同
void print(int a, double b) {
    std::cout << "int: " << a << ", double: " << b << std::endl;
}

void print(double a, int b) {
    std::cout << "double: " << a << ", int: " << b << std::endl;
}
```

---

### **函数重载的规则**
- **返回类型不能作为重载依据**

```cpp
// 错误示例，不能仅通过返回类型区分重载
int func(int a);
double func(int a);
```
- **引用不能作为参数的区分**

```cpp
// 错误示例，引用不能作为参数的区分
void func(int a);
void func(int& a);
```
 