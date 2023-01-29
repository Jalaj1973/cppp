#include <iostream>
using namespace std;
int main()
{
    int a, x;
    cout << "enter number" << endl;
    cin >> a;

    try
    {

        if (a > 75)
        {
            x = (a * 100) / 100;
            cout << "eligible :-" << x << endl;
        }
        else
        {
            throw(x);
        }

        catch (int i)
        {
            cout << "debared" << x << endl;
        }
        catch (char a)
        {
            cout << "invalid" << x << endl;
        }
    }
    return 0;
}