#include<iostream>
using namespace std;


int main(){
    int a,b;
    cout<<"enter numerator:"; cin>>a;
    cout<<"enter denominator:"; cin>>b;
    
    try{
        if(b==0)
            throw runtime_error("divissin by zero nt allowed!");
       cout<<"result="<<a/b <<endl;
    }
    catch(runtime_error &e){
        cout<<"exception caughtt:="<<e.what()<<endl;
    }
    cout<<"program continue after exception handling \n";
return 0;
}
