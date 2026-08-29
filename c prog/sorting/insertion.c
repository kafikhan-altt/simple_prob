
#include <stdio.h>
void parray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
       parray(arr, 5);
}



int main()
{
    int n = 5;

    int arr[] = {4, 2, 5, 6, 3};

    insertionsort(arr, 5);
    return 0;

}