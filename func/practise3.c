#include <stdio.h>

float fom(float m){

    float g= 9.8 ;

    float F=(m*g);

    printf("the force applied by twin is %f", F);



}

int main(){
      
    float input;
    printf("enter the mass ");
    scanf("%f", &input);
    fom(input);

    
    return 0;
}

