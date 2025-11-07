#include <stdio.h>

int main(){
    int arr[]={0,2,4,6,8,10};
    int *ptr = arr;
    printf("the value at adress %d is %d",ptr+3, *(ptr+3));
    return 0;
} 
 
 