#include <iostream>
using namespace std;
void test(int x)
{
    try
    {
        if (x > 0)
            throw x;
        else
            throw 'x';
    }
    catch (int x)
    {
        cout << "Catch a integer and that integer is:" << x;
    }
    catch (char x)
    {
        cout << "Catch a character and that character is:" << x;
    }
}

int main()
{
    cout << "Testing multiple catches\n:" << endl;
    test(10);
    cout << " " << endl;
    test(0);
    return 0;
}