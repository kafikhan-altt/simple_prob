#include <stdio.h>

int main(){
    int arr[10];
    int p;
    printf("enter the number whose table you want \n");
    scanf("%d",&p);
    for (int i=0;i<10;i++){
        arr[i]=p*(i+1);

    }

    for (int i=0;i<10;i++){
        printf("the value of %d into %d is %d \n",p,i+1, arr[i] );
    }
    for (int j=0;j<10;j++)
    printf(" the w is %d \n", arr[j] );
    return 0;

}