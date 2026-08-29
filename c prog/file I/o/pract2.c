#include<stdio.h>

int main(){

FILE *ptr;
ptr=fopen("sample.txt","a");
int num=102;
fprintf(ptr, "%d", num);

fclose(ptr);


return 0;



}