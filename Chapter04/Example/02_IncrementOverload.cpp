#include<iostream>
using namespace std;

class Counter
{
private:
    unsigned int count;
public:
    Counter(int c=0) : count(c) {}
    Counter operator++();
    Counter operator++(int);
    Counter operator--();
    Counter operator--(int);
    int getCount() const;
    void display() const;
};

Counter Counter::operator++()
{
    ++count;
    return *this;
}

Counter Counter::operator++(int)
{
    Counter temp = *this;
    ++(*this);
    return temp;
}

Counter Counter::operator--()
{
    --count;
    return *this;
}

Counter Counter::operator--(int)
{
    Counter temp = *this;
    --(*this);
    return temp;
}

int Counter::getCount() const
{
    return count;
}

void Counter::display() const
{
    cout << "Count: " << count << endl;
}

int main()
{
    Counter c1, c2(10), c3;
    c1.display();
    c2.display();
    c3.display();
    c1 = ++c2;
    c1.display();
    c2.display();
    c3.display();
    c1 = c2++;
    c1.display();
    c2.display();
    c3.display();
    c1 = --c2;
    c1.display();
    c2.display();
    c3.display();
    c1 = c2--;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}