#include <stdio.h>


int avgmarks(){
    int a,b,c ;
    printf("enter 1st num ");
    scanf("%d", &a);           


    printf("enter 2nd num ");
    scanf("%d", &b);                              

    printf("enter 3rd num ");
    scanf("%d", &c);
    float ans;
    ans=((a+b+c)/3);

    printf("avg is %f", ans);

}
int main(){

int ans;
    avgmarks();
    return 0; 
} 