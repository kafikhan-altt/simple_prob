#include <stdio.h>

       
 int return_5(int* ptr){
    printf(" the value of ptr %d \n", ptr);
    printf("the value at ptr %d ", *ptr);
    return 5;
 }
int main(){
    int i=2;
    int* ptr= &i; 
    printf("the address  of i is %d\n", i);
    return_5(ptr);

    return 0;
}