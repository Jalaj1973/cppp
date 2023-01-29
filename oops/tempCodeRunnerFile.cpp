#include <iostream>
using namespace std;

//super parent class
class A{
public:
    virtual void name(){
         cout << "This is class A \n";
    }
};

//base class I
class B: public A{
public:
    void name(){
         cout << "This is class B \n";
    }
};

//base class II 
class C:  public A{
public:
    void name(){
         cout << "This is class C \n";
    }
};
 
//derived class
class D: public B, public C{
public:
    void name(){
         cout << "This is class D \n";
    }
};
 
int main()
{
    D d;
    d.name();
 
    return 0;
}