#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter a and b" << endl;
    cin >> a >> b;

    try
    {
        if (b != 0)
        {
            cout << "division is " << (a / b) << endl;
        }
        else
        {
            throw(b);
        }
    }
    catch (int i)
    {
        cout << "divison by zero error" << endl;
    }

    return 0;
}