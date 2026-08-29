
#include <stdio.h>                     // Header file

int main() {                           // Main function starts

    int a[5], i, j, min, temp;         // Declare array and variables

    printf("Enter 5 elements:\n");     // Ask user for input

    for (i = 0; i < 5; i++)            // Loop to read elements
        scanf("%d", &a[i]);            // Store elements

    for (i = 0; i < 4; i++) {          // Loop for selecting position
        min = i;                     // Assume current index as minimum

        for (j = i + 1; j < 5; j++)    // Loop to find minimum element
            if (a[j] < a[min])         // Compare elements
                min = j;               // Update minimum index

        temp = a[i];                   // Store current element
        a[i] = a[min];                 // Swap with minimum element
        a[min] = temp;                 // Complete swap
    }

    printf("Sorted array:\n");         // Output message

    for (i = 0; i < 5; i++)            // Loop to print sorted array
        printf("%d ", a[i]);           // Print element

    return 0;                          // End program
}       