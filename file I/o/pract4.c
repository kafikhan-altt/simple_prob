#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "w");
    
    int i;
    int num=4;
    for(i=0;i<10;i++){
        fprintf(ptr,"%d", num*(i+1));

    fprintf(ptr, "\n");



    }

     


    fclose(ptr);
    return 0;
}