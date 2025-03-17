---
marp: true
theme: gaia
paginate: true
---

<!-- _class: lead -->
# **头文件和命名空间**

---
### **C语言**
C语言标准库的头文件通常以 `.h` 作为扩展名，例如 `<stdio.h>` 用于标准输入输出，`<math.h>` 用于数学函数等。这些头文件主要包含函数声明、宏定义和类型定义等，为程序员提供了基本的输入输出、字符串处理、内存管理等功能。

---

### **C++语言**
C++兼容了大部分C语言的标准库，为了避免与C语言的头文件产生命名冲突，C++对C语言标准库的头文件进行了重新包装。C++中对应的C标准库头文件**去掉了** `.h` 扩展名，并在前面加上 `c` 前缀，例如 `<cstdio>`、`<cmath>` 等。此外，C++还有自己独立的标准库头文件，如 `<iostream>` 用于输入输出流，`<vector>` 用于动态数组等，这些头文件通常没有 `.h` 扩展名。

---

### **命名空间的引入**
+ C语言**没有名字空间**的概念，所有的标识符都处于全局作用域中。这可能会**导致不同库或模块之间的命名冲突**，尤其是在大型项目中。
+ C++引入了名字空间的概念，**标准库中的所有标识符都被封装在 `std` 名字空间中**。例如，在使用 `<iostream>` 头文件时，`cout` 和 `endl` 等标识符都属于 `std` 名字空间，需要使用 `std::cout` 和 `std::endl` 来访问。这样可以避免不同库之间的命名冲突，提高代码的可维护性。

---
### **命名空间**
命名空间（Namespace）是一种将全局作用域划分为不同部分的机制，它可以避免不同代码库中出现同名的标识符（如函数名、类名、变量名等）而导致的命名冲突。通过使用名字空间，可以将相关的标识符组织在一起，提高代码的可读性和可维护性。

---

### **命名空间的定义和使用**

```cpp
namespace MyNamespace {
    int value = 10;

    void printValue() {
        std::cout << "The value is: " << value << std::endl;
    }
}
```
---
```cpp
#include <iostream>
int main() {
    // 使用作用域解析运算符 :: 访问名字空间中的成员
    std::cout << MyNamespace::value << std::endl;
    MyNamespace::printValue();

    return 0;
}
```
---
### **说明**
在这个示例中，我们定义了一个名为 `MyNamespace` 的名字空间，其中包含一个变量 `value` 和一个函数 `printValue`。在 `main` 函数中，我们使用作用域解析运算符 `::` 来访问名字空间中的成员。

---

### **`using` 指令**
为了简化代码，我们可以使用 `using` 指令来引入名字空间中的成员。C++标准库中的所有标识符都定义在 `std` 名字空间中，因此在使用标准库的功能时，通常需要使用 `std::` 或者 `using namespace std;`。
```cpp

#include <iostream>
using namespace MyNamespace;

int main() {
    cout << "Hello World" << endl;
     return 0;
}
```
