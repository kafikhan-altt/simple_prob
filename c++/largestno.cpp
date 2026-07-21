#include<iostream>
using namespace std;

int largest(int a,int b, int c){
    int max;
    max=a;
    if(b>a){
        max=b;
    }
    if(c>a){
        max=c;
    }
    return max;
}

int main(){
    cout<<largest(1,2,3);
    return 0;
}