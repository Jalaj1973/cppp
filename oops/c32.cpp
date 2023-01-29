#include <iostream>
using namespace std;
int main()
{
    int i, j, p;
    int a[] = {1, 2, 3, 3, 4, 3,3, 7, 7, 6, 4, 4,  5};
    int n = sizeof(a) / sizeof(a[i]);
    int count;
    int visited[n];
    int temp;
        for (int i = 1; i < n-1; i++)
    {
            for (int j = 1; j < n-1; j++)
    {          if(a[j]>a[j+1])
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
    }
    }
        for (int i = 0; i < n; i++)
    {
        cout<<" element:-"<<a[i]<<endl;
    }
     cout<<"\n"<<endl;


    for (int i = 0; i < n; i++)
    {

        if (visited[i] != 1)
        {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    visited[j] = 1;
                    cout << "repeated element:-" << a[i] << endl;
                    break;
                }
            }
        }
    }
    return 0;
}