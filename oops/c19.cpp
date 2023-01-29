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
    friend void operator++(a &);
};
void operator++(a &t1,int)
{

    cout<<t1.b++;
}

int main()
{
    a obj1(20);

    obj1++;
  

    return 0;
}
