---
marp: true
theme: MyGaia
paginate: true
---
<!-- _class: lead -->
# **istream和ostream类中的成员函数**

---

### **概述**
+ iostream类库包含了许多用于处理大量I/O操作的类，其中，类istream支持流输入操作，类ostream支持流输出操作，类iostream同时支持流输入和输出操作。
+ 类istream和类ostream是通过单一继承从基类ios派生而来的。一个C++程序开始运行时将自动打开4个内置的标准流对象：cin、cout、cerr和clog。
+ 重载的左移位运算符（<<）表示流的输出，称为流插入运算符；重载的右移位运算符（>>）表示流的输入，称为流读取运算符。

---

### **概述**

+ cin是类istream的对象，它与标准输入设备(通常指键盘)连在一起。
+ cout是类ostream的对象，它与标准输出设备(通常指显示设备)连在一起。
+ cerr是类ostream的对象，它与标准错误输出设备连在一起。到对象cerr的输出是非缓冲输出，也就是说插入到cerr中的输出会被立即显示出来，非缓冲输出可迅速把出错信息告诉用户。
+ clog是类ostream的对象，它与标准错误输出设备连在一起。到对象clog的输出是缓冲输出。即每次插入clog可能使其输出保持在缓冲区，要等缓冲区刷新时才输出。

---

### **输入输出流的成员函数**

+ 除了重载的>>和<<运算符，这两个类中还包含了其他的成员函数。使用cin和读取运算符“>>”有一个限制，它会跳过空格。如果在某一行输入字符，“>>”将读出字符，只有那些非空格字符进入接收字符的变量中，空格将被跳过。同样，如果程序使用“>>”来读字符串中的文字，那么当它发现空格字符时，输入就会停止，后面的文字被读到下一个使用“>>”运算符的istream对象中，中间的所有空格都丢失。
+ 程序有时需要克服类似的限制，这就需要使用istream类和ostream类的成员函数。

---

### **get()**

+ get()：istream类的成员函数get()像“>>”运算符一样工作，不同处在于它可读取输入的空格。成员函数get()经常使用的形式有以下3种：
```cpp
int get();
istream& get(char & ch);
istream& get(char * buf, int size, char delim = ‘\n’);
```
+ 不带参数的get()成员函数从指定的输入流中读取*一个字符（包括空白符）*，并返回该字符作为函数调用的值；当遇到输入流中的文件结束符时，函数返回EOF（文件结束符）；

---

### **get()**

+ 带一个字符型参数的get()成员函数自动读取输入流中的下一个字符（包括空白字符），当遇到文件结束符时，函数返回0，否则返回对istream对象的引用；
+ 带有三个参数的get()成员函数的参数分别是接收字符的字符数组、字符数组的大小和分隔符（默认值为‘\n’）。函数或者在读取比指定的最大字符数*少一个字符*后结束，或者在遇到分隔符时结束。为使字符数组中输入的字符串能够结束，字符数组中会*自动插入一个空(NULL)字符*作为字符串结束符。函数*不把分隔符*放到字符数组中，但是*分隔符仍然会保留*在输入流中。

---

### **例子**

```cpp
int main()
{	const int SIZE = 80;
	char ch1,ch2,ch3,buffer1[SIZE],buffer2[SIZE];
	cout << "Enter a sentence:\n";
	cin >> buffer1;
	cout << "The string read with cin is:\n" << buffer1;
	ch1 = cin.get();
	ch2 = cin.get();
	cout << "\nThe result of cin.get() is:\n" << ch1 << ch2;
	cin.get(ch3);
	cout << "\nThe result of cin.get(ch3) is:\n" << ch3;
	cin.get(buffer2,SIZE);
	cout << "\nThe string read with cin.get(buffer2,SIZE) is:\n" << buffer2 << endl;
	return 0;
}
```
---

### **输入输出**
Enter a sentence:
this is a sample
The string read with cin is:
this
The result of cin.get() is:
 i
The result of cin.get(ch3) is:
s
The string read with cin.get(buffer2,SIZE) is:
 a sample

---

### **其它成员函数**
+ getline()：成员函数getline()与带三个参数的get()函数类似，它读取一行信息到字符数组中，然后插入一个空（NUll）字符。与get()函数不同的是，getline()要*除去*输入流中的分隔符（即读取字符并删除它），但是不把它存放在字符数组中。
+ put()：ostream类的put()成员函数用于输出一个字符，`cout.put(‘A’)`将字符A显示在屏幕上，它与语句`cout << ‘A’`等价，所不同的是还可以用ASCII码值表达式调用put成员函数，语句`cout.put(65)`也将字符A显示在屏幕上。

---

### **其它成员函数**

+ ignore()：istream类中成员函数ignore()用于在需要时跳过流中指定数量的字符（默认个数是1），或在遇到指定的分隔符（默认分隔符是EOF，避免ignore在读文件的时候跳过文件末尾）时结束。
+ putback()：成员函数putback()将最后一次用get()从输入流中提取的字符放回到输入流中。对于某些应用程序，该函数是很有用的。例如，如果应用程序需要扫描输入流以查找用特定字符开始的域，那么当输入该字符时，应用程序要把该字符放回到输入流中，这样才能使该字符包含到要被输入的数据中。

---

### **其它成员函数**
+ peek()：成员函数peek()返回输入流中的下一个字符，但并不将其从输入流中删除。
+ read()/write()：调用成员函数read()、write()可实现无格式输入／输出。这两个函数分别把一定量的字节写入字符数组和从字符数组中输出。这些字节都是未经任何格式化的，仅仅是以原始数据形式输入或输出，因此遇到空白符、字符串结束符等时也不会停止。
+ gcount()：成员函数gcount()统计最后输入的字符个数。
这些成员函数的具体使用方法可以参考相关的手册。