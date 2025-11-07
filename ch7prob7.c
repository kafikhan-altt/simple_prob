#include <stdio.h>

int main(){
    int n1,n2,n3;
    printf(" enter the number whose table you want \n");
    scanf("%d%d%d",&n1,&n2,&n3);
int a[3][10];
int mul[]={n1,n2,n3};


for(int i=0;i<3;i++){
    printf(" table  of %d \n",mul[i] );

  for(int j=0;j<10;j++){
   
    printf("the value of arr[i][j] %d \n", a[i][j] =mul[i] *(j+1));
   
}
 
}

return 0;

}