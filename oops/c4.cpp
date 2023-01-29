#include <iostream>
using namespace std;
class Swap
{
    int num;

public:
    void input()
    {
        cout << " enter num" << endl;
        cin >> num;
    }
    friend void swap(Swap &, Swap &);
};

void swap(Swap &s1, Swap &s2)
{
    int temp;
    cout << " Before swaping values of both objects\n"
         << s1.num << " " << s2.num << endl;
    temp = s1.num;
    s1.num = s2.num;
    s2.num = temp;
    cout << "After swaping values of both objects\n"
         << s1.num << "  " << s2.num << endl;
}

int main()
{
    Swap s1, s2;
    s1.input();
    s2.input();
    swap(s1, s2);
    return 0;
}