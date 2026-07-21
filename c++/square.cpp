#include<iostream>
using namespace std;

class sqrno{
    private:
      int number;
    public:
      void get_data(){
         cout<<"enter the no";
         cin>>number;
       }
      void sqr(){
        float ans=number*number;
        cout<<ans;
      }


};

int main(){
    sqrno r1;
    r1.get_data();
    r1.sqr();
return 0;
}