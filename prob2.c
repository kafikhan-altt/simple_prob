
#include<stdio.h>

void change_to_sixty7times(int*);

void change_to_sixty7times(int* a){
*a=*a *67 ;
}

int main(){

int x=45;
printf("udcbkvbkv %d \n", x);

change_to_sixty7times(&x);

printf(" %d \n", x);
return 0;
}
