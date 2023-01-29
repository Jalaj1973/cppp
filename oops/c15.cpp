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
    void operator>(a t2)
    {
      if(b>t2.b){
        cout<<"object 1 is greater:"<<b;
      }
      else{
        cout<<"object 2 is greater:-"<<t2.b;
      }
    }
};

int main()
{
    a obj1(20), obj2(30), obj3;

      obj1>obj2;

    return 0;
}
