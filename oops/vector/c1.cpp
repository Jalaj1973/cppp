#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void input(vector<int> &arr, int n)
{
    cout << "Enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
}
void output(vector<int> &arr, int n)
{
    cout << " Elements in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}

void sort(vector<int> &arr)
{
    cout << " sorting" << endl;
    sort(arr.begin(), arr.end());
}

void pop(vector<int> &arr, int &n, int index)
{
    arr.erase(arr.begin() + index);
    n--;

    /*for array
     int i, j;
     for (i = 0; i < n; i++)
     {
         if (arr[i] == arr[index])
         {
             arr[i] = arr[i + 1];
         }
     }
     n--;
 */
}

int main()
{
    vector<int> arr;
    cout << "Enter size" << endl;
    int n;
    cin >> n;
    input(arr, n);
    pop(arr, n, 2);
    output(arr, n);
    return 0;
}
