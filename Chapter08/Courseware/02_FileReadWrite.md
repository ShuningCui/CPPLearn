---
marp: true
theme: MyGaia
paginate: true
---
<!-- _class: lead -->
# **文件的读写操作**

---
### **文本文件读写操作**

+ 在C++中，可借助`<fstream>`头文件里的类对文本文件和二进制文件进行读写操作。

---

#### 读取文本文件
运用`ifstream`类读取文本文件，可按行或者逐个字符读取。
```cpp
ifstream inFile("text_file.txt");
if (inFile.is_open()) {
    string line;
    while (getline(inFile, line)) {
            cout << line << endl;
    }
inFile.close();
```

---

### **解释**
在上述代码中：
1. 创建`ifstream`对象`inFile`并尝试打开`text_file.txt`文件。
2. 借助`is_open()`函数检查文件是否成功打开。
3. 利用`getline()`函数按行读取文件内容。
4. 操作结束后调用`close()`函数关闭文件。

---

### **写入文本文件**

使用`ofstream`类向文本文件写入内容。
```cpp
ofstream outFile("text_file.txt");
if (outFile.is_open()) {
        outFile << "这是写入文本文件的内容。" << endl;
        outFile.close();
} 
```

---

### **解释**
在上述代码中：
1. 创建`ofstream`对象`outFile`并尝试打开`text_file.txt`文件。若文件不存在则创建，若存在则清空内容。
2. 使用`is_open()`函数检查文件是否成功打开。
3. 利用`<<`运算符向文件写入内容。
4. 操作结束后调用`close()`函数关闭文件。

---

### **二进制文件读写操作**
二进制文件直接存储数据的二进制形式，适合存储图像、音频等数据。

---

#### 读取二进制文件
使用`ifstream`类以二进制模式读取二进制文件。

```cpp
ifstream inFile("binary_file.bin", ios::binary);
if (inFile.is_open()) {
    char buffer[100];
    inFile.read(buffer, sizeof(buffer));
    if (inFile) {
        cout << "成功读取" << sizeof(buffer) << " 字节。" << endl;
    } else {
        cout << "读取了 " << inFile.gcount() << " 字节。" << endl;
    }
    inFile.close();
} 
```

---

### **解释**
在上述代码中：
1. 创建`ifstream`对象`inFile`，并以二进制模式打开`binary_file.bin`文件。
2. 使用`is_open()`函数检查文件是否成功打开。
3. 利用`read()`函数从文件读取指定字节数的数据到缓冲区。
4. 操作结束后调用`close()`函数关闭文件。

---

### **写入二进制文件**
使用`ofstream`类以二进制模式向二进制文件写入内容。
```cpp
ofstream outFile("binary_file.bin", std::ios::binary);
if (outFile.is_open()) {
    char data[] = {0x01, 0x02, 0x03, 0x04};
    outFile.write(data, sizeof(data));
    outFile.close();
} 
```

---

### **解释**
在上述代码中：
1. 创建`ofstream`对象`outFile`，并以二进制模式打开`binary_file.bin`文件。
2. 使用`is_open()`函数检查文件是否成功打开。
3. 利用`write()`函数将数据写入文件。
4. 操作结束后调用`close()`函数关闭文件。