#include <iostream>
using namespace std;
class A
{
public:
    float a, b, y;

    A(float a, float b)
    {
        this->a = a;
        this->b = b;
    }

    friend void calculate(A &);
};
void calculate(A &o1)
{
    o1.y = o1.a - o1.b;
    try
    {
        if (o1.y != 0)
        {
            cout << "division is " << o1.a / o1.y << endl;
        }
        else
        {
            throw(o1.a - o1.b);
        }
    }
    catch (float y)
    {
        cout << "divison by zero error" << endl;
    }
}

int main()
{
    A o1(10, 10);
    calculate(o1);
    return 0;
}