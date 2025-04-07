#include <iostream>
using namespace std;

// 定义类模板
template <typename T>
class Stack
{
private:
    T* data;
    int top;
    int capacity;
public:
    // 构造函数
    Stack(int size) : capacity(size), top(-1)
    {
        data = new T[capacity];
    }

    // 析构函数
    ~Stack()
    {
        delete[] data;
    }

    // 入栈操作
    void push(T value)
    {
        if (top < capacity - 1)
        {
            data[++top] = value;
        }
        else
        {
            cout << "Stack is full!" << endl;
        }
    }

    // 出栈操作
    T pop()
    {
        if (top >= 0)
        {
            return data[top--];
        }
        else
        {
            cout << "Stack is empty!" << endl;
            return T();
        }
    }

    // 判断栈是否为空
    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    // 创建一个存储整数的栈
    Stack<int> intStack(5);
    intStack.push(10);
    intStack.push(20);
    cout << "Popped: " << intStack.pop() << endl;

    // 创建一个存储字符的栈
    Stack<char> charStack(3);
    charStack.push('a');
    charStack.push('b');
    cout << "Popped: " << charStack.pop() << endl;

    return 0;
}
