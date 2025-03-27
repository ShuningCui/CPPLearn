#include<iostream>
using namespace std;

class Data
{
private:
    int x, y;
    int* p;
public:
    Data(int a, int b, int c) : x(a), y(b)
    {
        p = new int(c);
    }
    /*    Data(const Data& d) : x(d.x), y(d.y)
        {
            p = new int(*d.p);
        }
    */
    ~Data()
    {
        // delete p;
    }
    /*    Data& operator=(const Data& d)
        {
            if (this != &d) // Avoid self-assignment
            {
                x = d.x;
                y = d.y;
                *p = *d.p;
            }
            return *this;
        }
    */
    void SetData(int a, int b, int c)
    {
        x = a;
        y = b;
        *p = c;
    }
    void display()
    {
        cout << "x = " << x << ", y = " << y << ", *p = " << *p << endl;
    }
};

int main()
{
    Data d1(10, 20, 30);
    Data d2(1, 2, 3);
    d2 = d1;
    d1.display();
    d2.display();
    d1.SetData(100, 200, 300);
    d1.display();
    d2.display();
    return 0;
}

// Output:
// x = 10, y = 20, *p = 30
// x = 10, y = 20, *p = 30
// x = 100, y = 200, *p = 300
// x = 10, y = 20, *p = 300