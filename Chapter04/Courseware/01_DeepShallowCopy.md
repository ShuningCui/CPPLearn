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
# **赋值运算符重载**

---

### **赋值运算符重载**
在C++中，赋值运算符重载、深拷贝和浅拷贝是面向对象编程里十分重要的概念。在C++里，赋值运算符 `=` 默认是由编译器自动提供的。不过，当类包含动态分配的资源（像动态数组、指针等）时，默认的赋值运算符可能无法满足需求，这时就需要对赋值运算符进行重载。

---

### **重载的语法**

```cpp
返回值类型& operator=(const 类型& other) {
      // 复制数据
      return *this;
}

```

---

### **浅拷贝**
浅拷贝是指在进行对象复制时，仅仅复制对象的成员变量的值。当对象包含指针成员时，浅拷贝只会复制指针的值，而不会复制指针所指向的内容。这就会导致多个对象共享同一块内存，在析构时可能会引发重复释放内存的问题。

---

#### 示例代码
```cpp
class ShallowCopyExample {
public:
    int* data;
    ShallowCopyExample(int value) {
        data = new int(value);
    }
    // 默认的赋值运算符执行浅拷贝
    ~ShallowCopyExample() {
        delete data;
    }
};
int main() {
    ShallowCopyExample obj1(10);
    ShallowCopyExample obj2 = obj1;
    // 这里会导致重复释放内存
    return 0;
}
```

---

#### 代码解释
在这个例子中，`ShallowCopyExample` 类有一个指针成员 `data`。默认的赋值运算符执行浅拷贝，使得 `obj1` 和 `obj2` 的 `data` 指针指向同一块内存。当 `obj1` 和 `obj2` 析构时，会尝试释放同一块内存，从而引发错误。

---

### **深拷贝**
深拷贝是指在进行对象复制时，不仅复制对象的成员变量的值，还会复制指针所指向的内容。这样每个对象都有自己独立的内存副本，避免了浅拷贝带来的问题。

---

#### 示例代码
```cpp
class DeepCopyExample {
private:
    int* data;
public:
    DeepCopyExample(int value) {
        data = new int(value);
    }
   // 拷贝构造函数实现深拷贝
    DeepCopyExample(const DeepCopyExample& other) {
        data = new int(*other.data);
    }
    // 赋值运算符重载实现深拷贝
    DeepCopyExample& operator=(const DeepCopyExample& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
        }
        return *this;
    }
    ~DeepCopyExample() {
        delete data;
    }
};

```

---

#### 代码解释
- 在 `DeepCopyExample` 类中，拷贝构造函数和赋值运算符重载函数都实现了深拷贝。
- 在拷贝构造函数中，为新对象的 `data` 指针分配新的内存，并将原对象 `data` 指针指向的值复制到新的内存中。
- 在赋值运算符重载函数中，先释放当前对象的内存，再为其分配新的内存，并复制值。这样每个对象都有自己独立的内存副本，避免了重复释放内存的问题。 

---

### **浅拷贝和深拷贝的示意图**

![h:500](..\Pics\DeepCopyShallowCopy.jpg)


