#include <stdio.h>

int main(){
    int a,b;
    FILE *ptr;
     ptr=fopen("text.txt","w");
    char name1[100],name2[100];

    printf("write the name ");
    scanf("%s",&name1);
    printf("salary of it ");
    scanf("%d", &a);
    printf("write the name2 ");
    scanf("%s",&name2);
    printf("salary of it ");
    scanf("%d", &b);

   
    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", ",");
    fprintf(ptr, "%d", a);

     
    fprintf(ptr, "\n");
    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", ",");
    fprintf(ptr, "%d", b);

    fclose(ptr);
    return 0;
}