#include <iostream>
using namespace std;
void percentage(int a)
{
    int x;
    try
    {
        if (a > 75)
        {
            x = (a * 100) / 100;
            cout << "eligible :-" << x << endl;
        }
        else
        {
            if (isalpha(a))
            {
                {
                    throw(a);
                }
            }
            else
            {
                throw(a);
            }
        }
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
int main()
{
    int a, x;
    cout << "enter number" << endl;
    cin >> a;
    percentage(a);

    return 0;
}