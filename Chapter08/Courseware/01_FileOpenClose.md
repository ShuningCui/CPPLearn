---
marp: true
theme: MyGaia
paginate: true
---
<!-- _class: lead -->
# **文件的打开与关闭**

---

### **概述**

在C++里，借助 `<fstream>` 头文件中的 `ifstream`（输入文件流）、`ofstream`（输出文件流）和 `fstream`（输入输出文件流）类，能以不同方式打开和关闭文本文件与二进制文件。

---

### **打开文件的模式**

- **`ios::in`**：以读模式打开文件。
- **`ios::out`**：以写模式打开文件，若文件存在则清空内容，不存在则创建。
- **`ios::app`**：以追加模式打开文件，在文件末尾添加内容。
- **`ios::ate`**：打开文件后将文件指针置于文件末尾。
- **`ios::trunc`**：若文件存在，打开时清空其内容。
- **`ios::binary`**：以二进制模式打开文件。

---

### **文本文件操作**

#### 以读模式打开
```cpp
std::ifstream inFile("text_file.txt", std::ios::in);
if (inFile.is_open()) {
    //....
    }
    inFile.close();
} 
else 
{
    std::cerr << "无法打开文件" << std::endl;
}

```

---

#### 以写模式打开
```cpp

std::ofstream outFile("text_file.txt", std::ios::out);
if (outFile.is_open()) {
    //...
    outFile.close();
} 
else {
    std::cerr << "无法打开文件" << std::endl;
}
```

---

### **二进制文件操作**

#### 以读模式打开
```cpp
std::ifstream inFile("binary_file.bin", std::ios::in | std::ios::binary);
if (inFile.is_open()) {
    //...
    inFile.close();
} 
else {
    std::cerr << "无法打开文件" << std::endl;
}
```

---

#### 以写模式打开
```cpp
std::ofstream outFile("binary_file.bin", std::ios::out | std::ios::binary);
if (outFile.is_open()) {
    char data[] = {0x01, 0x02, 0x03, 0x04};
    outFile.write(data, sizeof(data));
    outFile.close();
}
else
{
    std::cerr << "无法打开文件" << std::endl;
}
```

---

### **总结**
- 打开文件时，依据需求选择合适的文件流类（`ifstream`、`ofstream` 或 `fstream`）与打开模式。
- 对于文本文件，一般不使用 `ios::binary` 模式；对于二进制文件，则必须使用 `ios::binary` 模式。
- 操作完成后，要调用 `close()` 方法关闭文件，以释放系统资源。