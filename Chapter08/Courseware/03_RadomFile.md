---
marp: true
theme: MyGaia
paginate: true
---
<!-- _class: lead -->
# **随机文件的读写操作**

---

### **随机文件**
在C++里，随机文件读写指的是可以在文件的任意位置进行读写操作，而非像顺序读写那样只能按顺序从文件开头开始。这种操作需要借助文件流的定位功能，也就是移动文件指针到指定位置。下面会详细介绍使用 `fstream` 类进行随机文件读写的操作。

---

### **随机文件读写的基本步骤**
1. **打开文件**：使用 `fstream` 类以合适的模式打开文件，通常需要结合 `ios::in`（读模式）、`ios::out`（写模式）和 `ios::binary`（二进制模式）。
2. **定位文件指针**：利用 `seekg()` 函数移动输入文件指针（用于读取），使用 `seekp()` 函数移动输出文件指针（用于写入）。
3. **读写数据**：定位好文件指针后，就可以进行读写操作。
4. **关闭文件**：操作完成后，关闭文件以释放资源。

---

### **示例代码**

#### 写入文件
```cpp
struct Student {
    int id;
    char name[50];
    float score;
};
```

---

```cpp
fstream file("students.dat", ios::out | ios::binary);Student s1 = {1, "Alice", 85.5};
Student s2 = {2, "Bob", 90.0};
// 写入第一个学生的数据
file.write(reinterpret_cast<const char*>(&s1), sizeof(Student));
// 写入第二个学生的数据
file.write(reinterpret_cast<const char*>(&s2), sizeof(Student));
```

---

### **解释**
上述代码定义了一个 `Student` 结构体，包含学生的 `id`、`name` 和 `score`。接着以二进制写模式打开文件 `students.dat`，把两个 `Student` 对象的数据写入文件。

---

### **读取随机文件**
```cpp
fstream file("students.dat", ios::in | ios::binary);
Student s;
// 移动文件指针到第二个学生的数据位置
file.seekg(sizeof(Student), ios::beg);
// 读取第二个学生的数据
file.read((char*)&s, sizeof(Student));
file.close();
```
此代码以二进制读模式打开文件 `students.dat`，运用 `seekg()` 函数将文件指针移动到第二个学生的数据位置，然后读取该学生的数据。

---

### **定位文件指针的函数**
- **`seekg()`**：用于移动输入文件指针，其原型如下：
```cpp
// 绝对定位
istream& seekg (streampos pos);
// 相对定位
istream& seekg (streamoff off, ios_base::seekdir way);
```

---

### **定位文件指针的函数**
- `pos`：指定文件指针的绝对位置。
- `off`：指定偏移量。
- `way`：指定偏移的起始位置，有三个取值：
    - `ios::beg`：从文件开头开始偏移。
    - `ios::cur`：从当前文件指针位置开始偏移。
    - `ios::end`：从文件末尾开始偏移。

- **`seekp()`**：用于移动输出文件指针，其原型和使用方法与 `seekg()` 类似。

---

### **注意事项**
- 进行随机文件读写时，通常采用二进制模式（`ios::binary`），这样可以避免因换行符等问题导致的文件指针定位错误。
- 要确保文件指针的定位正确，否则可能会读取或写入错误的数据。
- 当偏移的起始位置为`ios::cur`或`ios::end`时，偏移值可以是正数（向后移动）也可以是负数（向前移动）