#include <iostream>
using namespace std;
class test
{

public:
    int a = 5;
    void operator++()
    {

        a++;
    }
};

int main()
{
    test obj1;
 cout << obj1.a<<endl;
    ++obj1;
    cout << obj1.a;
    return 0;
}
