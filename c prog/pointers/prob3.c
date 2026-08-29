#include <stdio.h>

void sum(int a, int b)
{

    printf("the sum is %d \n", a + b);
}

void avg(int a, int b)
{

    float avg = ((a + b) / 2.0);
    printf("yup sir ts is your avg %f \n", avg);
}
int main()
{

    int x = 10;
    int y = 20;

    sum(x, y);
    avg(x, y);

    return 0;
}