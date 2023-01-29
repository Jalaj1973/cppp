#include <stdio.h>
#include <stdlib.h>
void setarr(int arr[], int n)
{
    int i = 0, p = 0;

    while (i < n)
    {
        if (arr[i] < 0)
        {
            int temp = arr[i];

            arr[i] = arr[p];
            arr[p] = temp;
            p++;
        }
        else
        {
            i++;
        }
    }

    printf("\n");
    printf("now array is:");
    for (i = 0; i < n; i++)
    {

        printf("%d\t", arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of array :");

    scanf("%d", &n);
    int arr[n];

    printf("Enter the element in array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    setarr(arr, n);
    return 0;
}
