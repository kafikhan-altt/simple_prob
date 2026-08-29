#include<stdio.h>
#define MAX 100

int main(){
    int n,i,position, arr[MAX];
    
    printf("ENTER NO OF ELEMENT");
    scanf("%d",&n);

    printf("enter the element");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
printf("enter the posit to delete");
scanf("%d",&position);
    for(i=position-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}