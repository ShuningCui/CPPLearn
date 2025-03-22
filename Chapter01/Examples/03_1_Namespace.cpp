#include <iostream>
namespace ns1
{
    int x = 10;
    void display()
    {
        std::cout << "ns1::x = " << x << std::endl;
    }
}
namespace ns2
{
    int x = 20;
    void display()
    {
        std::cout << "ns2::x = " << x << std::endl;
    }
}
using namespace ns1;
using namespace ns2;
int main()
{
    ns1::display();
    ns2::display();
    return 0;
}