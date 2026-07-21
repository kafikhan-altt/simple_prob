#include<iostream>
using namespace std;

class base{
    public:
     void show(){
        cout<<"the is base class";
     }
};

class derived:public base{
    public:
    void show(){
        cout<<"the is derived class";
    }
};

int main(){
    base *ptr;
    derived obj;
    ptr=&obj;
    ptr->show();
return 0;
}