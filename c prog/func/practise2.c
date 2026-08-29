#include<stdio.h>

float c2f(float q){
    float F=(((9/5)*q)+32);

    printf("the value %f", F);

}

int main(){

    printf("enter celsius value ");
    float c;
    scanf("%f", &c);

    c2f(c);  
    
    return 0;
}
