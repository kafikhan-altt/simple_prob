#include <stdio.h>

int Fibonacci(int n){
    if(n==0 || n==1){
        return n; 
    }
    return Fibonacci(n-1) +Fibonacci(n-2) ;
}


int main(){

int n =4;

printf("the value of Fibonacci series for n  %d is %d", n, Fibonacci(n));
return 0;
}

//0 1 1 2 3 5 8 13 21 34 55 89 144



