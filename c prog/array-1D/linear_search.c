#include<stdio.h>
#define MAX 100

int main(){
     
int i,n,arr[MAX],element;

printf("enter the noo of element");
scanf("%d",&n);
printf("enter the element");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
printf("enter no the element u want too search");
scanf("%d",&element);
  for(i=0;i<n;i++){
    if(arr[i]==element){
        printf("element found at posi %d",i+1);
        return 0;
    }}
printf("element not found");
return 0;
}