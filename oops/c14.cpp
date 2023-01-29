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
    a operator*(a t2)
    {
        a temp;
        temp.b = b * t2.b;
        return temp;
    }
};

int main()
{
    a obj1(20), obj2(30), obj3;

    obj3 = obj1 * obj2;
    cout << "total :-" << obj3.b;

    return 0;
}
