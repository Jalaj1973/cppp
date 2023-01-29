#include <iostream>
using namespace std;
class shape
{
public:
    float d1, d2;
    void input()
    {
        cin >> d1 >> d2;
    }
    virtual float area() = 0;
};
class triangle : public shape
{
public:
    float area()
    {
        return (0.5 * d1 * d2);
    }
};
class rectangle : public shape
{
public:
    float area()
    {
        return (d1 * d2);
    }
};

class circle : public shape
{

public:
    float c;
    float area()
    {
        cin>>c;
        return (3.14 *c * c);
    }
};

int main()
{
    triangle t;
    cout << "enter h and b:- " << endl;
    t.input();
    cout << "The area of triangle is :" << t.area() << endl;

    rectangle r;
    cout << "enter l and b :- " << endl;
    r.input();
    cout << " The area of rectangle is :" << r.area() << endl;

    circle c;

    cout<<"enter radius and get area of circle :"<<c.area()<<endl;
    return 0;
}