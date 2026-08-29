#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 10;
    int *p;
    p = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {

        p[i] = 7 * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {

        printf("%d \n", p[i]);
    }


    printf("After Reallocation \n");
    p = realloc(p, 15 * sizeof(int));

    for (int i = 10; i < 15; i++)
    {

        p[i] = 7 * (i + 1);
    }
    for (int i = 0; i < 15; i++)
    {

        printf("%d \n", p[i]);
    }

    free(p);

    return 0;
}
