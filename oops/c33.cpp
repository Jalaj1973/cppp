#include <iostream>
using namespace std;

int main()
{
    int i, arr[20], j, no;
    cout << "Enter Size of array: ";
    cin >> no;
    cout << "Enter any " << no << " num in array: ";
    for (i = 0; i < no; i++)
    {
        cin >> arr[i];
    }
    cout << "Dublicate Values are: ";
    for (i = 0; i < no; i++)
    {
        for (j = i + 1; j < no; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "\n"
                     << arr[i];
            }
        }
    }
    return 0;
}