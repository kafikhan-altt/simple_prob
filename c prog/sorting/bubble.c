#include <stdio.h>

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        printf("%d", arr[i]);
    }
}
void bubble_sort(int arr[], int n)
{
    int i, j, temp;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printarr(arr, n);
}
int main()
{
    int arrw[] = {2, 4, 7, 1, 3};
    
    bubble_sort(arrw, 5);
    return 0;
}
