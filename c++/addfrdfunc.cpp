#include<iostream>
using namespace std;

class numbers{
    int a,b;
    public:
     void get_data(int j,int k){
        a=j,b=k;
     }
    friend int addfriend(numbers);
};

int addfriend(numbers n){
   return n.a+n.b;
}
int main(){
   numbers n;
   n.get_data(2,2);
   cout<<addfriend(n);
return 0;
}