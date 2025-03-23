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
# **常量**

---

### **常量成员函数**
常量成员函数是指在函数声明和定义时在函数名后面加上const关键字的函数，这类函数不会修改对象的状态。
```cpp
class MyClass {
private:
    int data;
public:
    MyClass(int value) : data(value) {}
    int getData() const { return data; }
    void setData(int value) { data = value; }
};
```

---

### **常量对象**
当你把一个对象声明成常量对象后，该对象的状态在其生命周期内就不能被修改。
```cpp
const MyClass obj(10);
// obj.setData(20)  // 错误：不能修改常量对象的成员
std::cout << obj.getData() << std::endl;
```

---

### **初始化**
+ 常量成员变量需要在构造函数的初始化列表中进行初始化，因为常量一旦被初始化就不能再修改。
+ 也可以在静态变量前使用const修饰符，对于类中的常量静态成员变量，可在类外进行初始化。因为静态成员变量是属于类的，并非属于某个具体的对象，所以可以在类外单独初始化。
