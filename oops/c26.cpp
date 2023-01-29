#include <iostream>
using namespace std;
 
int sum(int x, int y)
{
    int c = x + y;
    return c;
}
 
string sum(const char* x, const char* y)
{
    string summation(x);
    summation += y;
    return summation;
}
 
int main()
{
    cout  << " \n Integer addition Output\n"<<sum(50, 20);
         
    cout <<" \n String Concatenation Output\n"<< sum("Polymorphism", " achieved");
         
}