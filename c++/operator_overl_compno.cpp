#include<iostream>
using namespace std;
class complex{ 
    float real,imag;
    public:
    complex(int r=0,int i=0){
        imag=i;
        real=r;
    }
    complex operator+(complex c){
        return complex(real+c.real,imag+c.imag);
    }
    void display(){
        cout<<real<<"+"<<imag<<"i";
    }
};

int main(){
    complex c1(3,4),c2(3,5);
    complex c3=c1+c2;
    cout<<"sum=";
    c3.display();

return 0;
}
