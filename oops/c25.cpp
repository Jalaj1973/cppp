#include <iostream>
using namespace std;

//super parent class
class A{
public:
 int x=55;
  A(){
   
    cout<<" class a called:-"<<x<<endl;
  }
    
};

//base class I
class B:  public A{
    public:
    int p=x;
  B(){
    cout<<" class B called:-"<<p<<endl;
  }
    
};

//base class II 
class C: public A{
    public:
      int l=x; 
  C(){
     
    cout<<" class C called:-"<<l<<endl;
  }
    
};
 
//derived class
class D: public B, public C{
    public:
  D(){
      int g=p;
    cout<<" class D called:-"<<g<<endl;
  }
    
};
 
int main()
{
    D d;
 
    return 0;
}