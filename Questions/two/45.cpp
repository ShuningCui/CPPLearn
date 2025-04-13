#include <iostream>
using namespace std;

template <typename T>
class List
{
public:
    List(T x = 0) { data = x; }
    void append(List* node) { node->next = this; next = NULL; total++; }
    List* getnext( ) { return next; }
    T getdata( ) { return data; }
    static int total;
private:
    T data;
    List* next;
};

template <typename T> int List<T>::total = 0;

int main( )
{
    int i, n = 5;
    List<int> headnode;
    List<int>* p, * last;
    last = &headnode;
    for (i = 1; i <= n; i++)
    {
        p = new List<int>(i * 2);
        p->append(last);
        last = p;
    }
    p = headnode.getnext( );
    while (p)
    {
        cout << p->getdata( ) << " ";
        p = p->getnext( );
    }
    cout << endl;
    cout << "total=" << List<int>::total << endl;
}