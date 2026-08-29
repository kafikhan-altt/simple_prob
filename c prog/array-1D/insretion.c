#include<stdio.h>

#define MAX 100
int main(){
    int arr[MAX],n,i,element,position;
    printf("enter no of element");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element u want to enter");
    scanf("%d",&element);
    printf("enter the position ");
    scanf("%d",&position);

    for(i=n;i>=position;i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=element;
    n++;
    
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

return 0;

}