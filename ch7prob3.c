#include <stdio.h>

int main(){
    int arr[10];
    for (int i=0;i<10;i++){
        arr[i]=5*(i+1);

    }

    for (int i=0;i<10;i++){
        printf("the value of 5 into %d is %d \n",i+1, arr[i] );
    }
    for (int j=0;j<10;j++)
    printf(" the w is %d \n", arr[j] );
    return 0;

}