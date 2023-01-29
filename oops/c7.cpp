#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    string a;

    void input()
    {
        cout << "enter string" << endl;
        cin >> a;
    }

    void output()
    {
        cout << "The string is\n"
             << a << endl;
    }

    void palidrome(string a)
    {
        string s;
        s = a;
        reverse(a.begin(), a.end());

        if (s == a)
        {
            cout << " palindrome" << endl;
        }
        else
        {
            cout << "not palindrome" << endl;
        }
    }
};

int main()
{
    A obj;
    obj.input();
    obj.output();
    obj.palidrome(obj.a);
    return 0;
}