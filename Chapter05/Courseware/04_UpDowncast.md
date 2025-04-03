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
# **基类和派生转换**

---
在C++里，基类和派生类之间存在两种重要的类型转换操作，即向上塑型和向下塑型，同时基类指针和派生类指针之间的赋值也有特定规则，下面详细讲解。

### **向上塑型（Upcasting）**
向上塑型指的是把派生类对象或者派生类指针转换为基类对象或者基类指针。这种转换是安全的，因为派生类包含了基类的所有成员，所以可以把派生类对象当作基类对象来使用。

---

### **示例代码**
```cpp
class Base {
public:
    void baseFunction() {
        std::cout << "This is a base function." << std::endl;
    }
};
```

---
### **示例代码**

```cpp
class Derived : public Base {
public:
    void derivedFunction() {
        std::cout << "This is a derived function." << std::endl;
    }
};
```

---

### **示例代码**

```cpp
int main() {
    Derived derived;
    // 派生类对象赋值给基类对象
    Base base = derived; 
    base.baseFunction();

    // 派生类指针赋值给基类指针
    Base* basePtr = &derived; 
    basePtr->baseFunction();
    return 0;
}
```

---

### **代码解释**
- `Base base = derived;`：把派生类对象`derived`赋值给基类对象`base`，这会调用基类的拷贝构造函数。
- `Base* basePtr = &derived;`：将派生类对象的地址赋值给基类指针`basePtr`，这样就可以通过基类指针调用基类的成员函数。

---

### **向下塑型（Downcasting）**
向下塑型是把基类对象或者基类指针转换为派生类对象或者派生类指针。这种转换并不总是安全的，因为基类对象不一定具备派生类特有的成员。在进行向下塑型时，需要保证基类指针或者引用实际上指向的是派生类对象。

---

### **示例代码**
```cpp
class Base {
public:
    virtual void print() {
        std::cout << "Base class" << std::endl;
    }
};
```

---

### **示例代码**

```cpp
class Derived : public Base {
public:
    void print() override {
        std::cout << "Derived class" << std::endl;
    }
};
```

---

### **示例代码**

```
int main() {
    Base* basePtr = new Derived();
    // 向下塑型
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr); 
    if (derivedPtr) {
        derivedPtr->print();
    }
    delete basePtr;
    return 0;
}
```

---

### **代码解释**

- `Base* basePtr = new Derived();`：创建一个派生类对象，并让基类指针`basePtr`指向它。
- `Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);`：使用`dynamic_cast`将基类指针`basePtr`转换为派生类指针`derivedPtr`。`dynamic_cast`在运行时进行类型检查，如果转换成功则返回派生类指针，否则返回`nullptr`。

---

### **基类指针和派生类指针直接赋值的规则**
- **派生类指针赋值给基类指针**：这是安全的，不需要进行显式类型转换，属于向上塑型。
- **基类指针赋值给派生类指针**：这是不安全的，需要进行显式类型转换。可以使用`static_cast`或`dynamic_cast`，推荐使用`dynamic_cast`，因为它会在运行时进行类型检查，能避免一些潜在的错误。

总结来说，向上塑型是安全的，能隐式完成；向下塑型则需要显式转换，且要确保转换的安全性。 