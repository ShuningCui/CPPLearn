---
marp: true
theme: gaia
paginate: true
---

<!-- _class: lead -->
# **string**

---

### **string 简介**

+ `string` 对象属于标准库的一部分，它提供了比C风格字符串（以 `\0` 结尾的字符数组）更便捷、安全且强大的字符串处理功能。
+ 要使用 `string` 对象，需要包含 `<string>` 头文件，它位于 `std` 命名空间中。

---

### **声明与初始化**
可以用多种方式声明和初始化 `string` 对象。
```cpp
// 声明一个空的 string 对象
string str1;
// 用字符串字面量初始化
string str2 = "Hello";
// 拷贝构造
string str3(str2);
```
---

### **字符串操作**
- **拼接**：可使用 `+` 或 `+=` 操作符来拼接字符串。
```cpp
string s1 = "Hello";
string s2 = " World";
string s3 = s1 + s2;
s1 += s2;
```
- **获取长度**：`length()` 或 `size()` 方法能返回字符串的长度。
```cpp
string str = "example";
int len = str.length();
```
___

### **字符串操作**
- **访问字符**：可以通过下标操作符 `[]` 或 `at()` 方法来访问字符串中的单个字符。
```cpp
string str = "test";
char c1 = str[0];
char c2 = str.at(1);
```
- **查找子串**：`find()` 方法可用于查找子串在字符串中的位置。
```cpp
string str = "abcdefg";
size_t pos = str.find("cd");
```
---

### **输入输出**
可以使用 `cin` 和 `cout` 进行 `string` 对象的输入输出。
```cpp
string str;
cout << "Enter a string: ";
cin >> str;
cout << "You entered: " << str << endl;
return 0;
```
---

### **与C风格字符串的转换**
- **`string` 转C风格字符串**：`c_str()` 方法能返回一个指向以 `\0` 结尾的字符数组的指针。
```cpp
string str = "example";
const char* cstr = str.c_str();
```
- **C风格字符串转 `string`**：可直接用C风格字符串初始化 `string` 对象。
```cpp
const char* cstr = "test";
string str(cstr);
```

---

### **优点**
- **自动内存管理**：`string` 对象会自动处理内存的分配和释放，避免了手动管理内存的麻烦和风险。
- **丰富的操作方法**：标准库为 `string` 提供了大量的方法，方便进行各种字符串操作。
- **安全性高**：相较于C风格字符串，`string` 对象在使用时更不容易出现缓冲区溢出等问题。 