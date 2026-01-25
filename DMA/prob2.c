#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 6;
    int *ptr;

    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }
   

    printf("You entered:\n");
    for (int i = 0; i < n; i++) {

        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}

