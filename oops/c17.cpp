#include <iostream>
using namespace std;
class a
{

public:
    int b;
    a(int x = 0)
    {
        b = x;
    }
    friend void operator>(a &, a &);
};
void operator>(a &obj1, a &obj2)
{
    if (obj1.b > obj2.b)
    {
        cout << "object 1 is greater:"<<obj1.b;
    }
    else
    {
        cout << "object 2 is greater:-"<<obj2.b;
    }
}

int main()
{
    a obj1(20), obj2(30), obj3;

    obj1 > obj2;

    return 0;
}
