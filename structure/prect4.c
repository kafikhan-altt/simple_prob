#include<stdio.h>

struct c{
    int real;
    int imag;
}complex;  

int main(){

   int i=0;
   while(i<5){
    
    int n1,n2;
    printf("Enter the real and imaginary parts of the complex number: ");
    scanf("%d %d",&n1,&n2);
    struct c v1={n1,n2};

    printf("the value of complex number is %d+%di \n",v1.real,v1.imag);
    i++;
    
   } 
    return 0;
}