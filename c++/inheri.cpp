#include<iostream>
using namespace std;

class A{
    public:
     void showa(){
        cout<<"class A\n";
     }
};
class B{
    public:
     void showb(){
     cout<<"class b\n";
 }
};

class single:public A{
    public:
     void showsingle(){
     cout<<"single inheritance\n";
}
};

class multiple:public A,public B{
    public:
     void showmultiple(){
     cout<<"multi inheritance\n";
}
};

class multilevel:public single{
    public:
     void showmultilevel(){
     cout<<"multilevel inheritance\n";
}
};

class D:public A{public: void showd(){cout<<"hierarchihal\n";}};
class E:public A{public: void showe(){cout<<"hierarachichal\n";}};

int main(){
    single s; s.showa(); s.showsingle();
    multiple m; m.showa(); m.showmultiple(); m.showb();
    multilevel ml; ml.showa(); ml.showsingle(); ml.showmultilevel();
    D d; d.showa();d.showd();
    E e; e.showa(); e.showe();
return 0;
}
