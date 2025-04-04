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
# **析构函数**

---

### **析构函数的语法**
在C++里，析构函数是一种特殊的成员函数，其作用是在对象生命周期结束时执行清理工作。析构函数的名称与类名相同，不过要在前面加上波浪号 `~`，并且它没有返回类型，也不接受任何参数。
```cpp
class ClassName {
public:
    // 析构函数
    ~ClassName() {
        // 清理代码
    }
};
```

---

### **特点**
1. **自动调用**：当对象的生命周期结束时，析构函数会被自动调用。这包括对象离开其作用域、动态分配的对象被删除（使用 `delete` 操作符）等情况。
2. **唯一性**：每个类只能有一个析构函数，并且不能被重载。
3. **不可显式调用**：尽管可以手动调用析构函数，但不建议这么做，因为这可能会引发未定义行为。

如果没有显式的定义析构函数，那么编译器会添加一个什么都不做的析构函数。

---

### **使用场景**
1. **释放动态分配的内存**：当类中使用了 `new` 操作符动态分配内存时，析构函数可以使用 `delete` 操作符来释放这些内存，防止内存泄漏。
2. **关闭文件或网络连接**：如果类的对象打开了文件或建立了网络连接，析构函数可以负责关闭这些资源。
3. **释放其他系统资源**：例如数据库连接、图形资源等，析构函数可以确保这些资源在对象销毁时被正确释放。

---

### **示例代码**
下面的示例展示了析构函数在释放动态分配内存方面的应用：
```cpp
#include <iostream>
class MyClass {
private:
    int* data;
public:
    MyClass(int size) { data = new int[size];}
    // 析构函数
    ~MyClass() { delete[] data;}
};
```

---


在这个示例中，`MyClass` 类的构造函数使用 `new` 操作符动态分配了一个整数数组的内存。析构函数使用 `delete[]` 操作符释放了这块内存。当 `obj` 对象离开其作用域时，析构函数会被自动调用，从而确保内存被正确释放。 