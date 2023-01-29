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
    void operator==(a t2)
    {
        if (b == t2.b)
        {
            cout << "equal:";
        }
        else
        {
            cout << "not equal";
        }
    }
};

int main()
{
    a obj1(20), obj2(20), obj3;

    obj1 == obj2;

    return 0;
}
