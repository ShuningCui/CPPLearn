---
marp: true
theme : gaia
paginate : true
---
<style>
em{
     font-style: normal;
     font-weight: bold;
     color: purple;
}
</style>

<!--_class: lead-->
# **this 指针**

---
### **基本概念**
+ 在C++里，`this`指针是一个十分关键的概念，它在类的成员函数里发挥着重要作用。
+ `this`指针是一个隐含于每个非静态成员函数中的特殊指针。它指向调用该成员函数的对象，也就是说，当一个对象调用其成员函数时，`this`指针就指向这个对象本身。
+ `this`指针的类型取决于成员函数所属的类，一般形式为`类名* const this`，这表明`this`指针本身是常量，不能被赋值，但可以通过它来修改所指向对象的内容。

---

### **作用**
- **区分同名的成员变量和局部变量**：在成员函数中，如果局部变量和成员变量同名，使用`this`指针可以明确指定访问的是成员变量。
```cpp
class Example {
private:
    int value;
public:
    void setValue(int value) {
        // 使用this指针访问成员变量
        this->value = value; 
    }
};
```

---
### **作用**
- **返回对象自身的引用**：成员函数可以返回`*this`，也就是返回调用该成员函数的对象本身的引用。这在实现链式调用时非常有用。
```cpp
class Point {
private:
    int x;
    int y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    Point& moveX(int dx) {
        x += dx;
        // 返回对象自身的引用
        return *this; 
    }
    Point& moveY(int dy) {
        y += dy;
        return *this;
    }
};
```

---

### **作用**
```cpp
int main() {
    Point p;
    // 链式调用
    p.moveX(3).moveY(5); 
    p.print();
    return 0;
}
```
在这个例子中，`moveX`和`moveY`函数都返回`*this`，这样就可以实现链式调用，使代码更加简洁。

---

### 使用场景
- **在成员函数中访问对象的成员**：当成员函数需要访问调用该函数的对象的成员时，可以使用`this`指针。
- **实现自引用和链式调用**：如上述例子所示，通过返回`*this`，可以实现方法的链式调用，提高代码的可读性和简洁性。

---

### 注意事项
- **静态成员函数没有`this`指针**：静态成员函数属于类，而不属于某个具体的对象，因此它*没有*`this`指针。静态成员函数只能访问静态成员变量和静态成员函数。
- **`this`指针不能被显式赋值**：`this`指针是一个*常量指针*，不能被显式赋值，即不能将其他地址赋给`this`指针。
