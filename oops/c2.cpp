#include <iostream>
using namespace std;
void input(int *arr, int n)
{
    cout << " enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void output(int *arr, int n)
{
    cout << " The elements are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void sort(int *ptr, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
}
int deletefirst(int *arr, int n, int element)
{

    int i, j;
    for (i = 0; i < n; i++)

        if (arr[i] == element)
        {
            n = n - 1;
            for (i = i; i < n; i++)
            {
                arr[i] = arr[i + 1];
            }
        }

    return n;
}

int insert(int *arr, int n, int ele, int index)
{

    int i, j;
    for (i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = ele;
    return 1;
}

   int removeDuplicates(int arr[],int n) {
        int k;
        for(int i=0;i<n;i++){
             for(int j=i+1;j<n;j++){
                 if(arr[i]==arr[j]){
                
                      for(int k=j;k<n-1;k++){
                          arr[k]=arr[k+1];
        }
                n--;
                 j--;
                 }
             }
       n--;
        }
         return n;
    }
    
int main()
{
    int i, j, n, arr[50];
    int *ptr = &arr[0];
    cout << "enter size" << endl;
    cin >> n;
    input(arr, n);
    removeDuplicates(arr,n);
    output(arr, n);

    return 0;
}