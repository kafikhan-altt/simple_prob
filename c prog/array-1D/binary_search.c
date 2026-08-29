#include<stdio.h>
#define MAX 100

int main(){
    int i,n,element,arr[MAX];
    int high,low,mid;
    printf("enter the no element");
    scanf("%d",&n);
    
    printf("enter the element");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter the element want too search");
    scanf("%d",&element);

    high=n,low=0;
    while(low<=high){
     mid=(low+high)/2;
      if (element==arr[mid]){
        printf("element founf at posi %d",mid+1);
        return 0;
      }
      else if(element<mid){
           high=mid-1;
      }
      else{
        low=mid+1;
      }
      }
return 0;
}