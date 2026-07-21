#include<iostream>
using namespace std;

int area(int r){
   return 3.143*r*r;
}
int area(int l,int b){
    return l*b;
}
int area(int l, int b,bool tri){
    return 0.5*l*b;
}

int main(){
    cout<<"area of circle \n"<<area(3);
    cout<<"area of circle \n"<<area(3,3);
    cout<<"area of circle \n"<<area(2,5,true);
   
return 0;
}
