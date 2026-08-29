#include<stdio.h>

struct c{
    int real;
    int imag;
}complex;  

int main(){

    struct c v1={10,20};
    
    printf("the value of complex number is %d+%di",v1.real,v1.imag);
  

    return 0;
}