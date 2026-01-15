#include <stdio.h>

int sum(int a, int b)
{ 
    int* ptr1 = &sum;
    printf("the sum is %d \n", a + b);
    return ptr1;
}
int avg(int a, int b)
{

    float avg = ((a + b) / 2.0);
    float* ptr2 = &avg;
    printf("yup sir ts is your avg %f \n", avg);
    return ptr2;
}
int main()
{
    int x = 10;
    int y = 20;

    int* ptr1;  
    float* ptr2;

    ptr1= sum(x,y);
    ptr2= avg(x,y);

    printf("Address of sum function: %u and of average is %u", ptr1, ptr2); 
    return 0;
}