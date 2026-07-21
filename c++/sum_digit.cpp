#include<iostream>
using namespace std;

class sum_no{
    private:
       int number;
    public:
        int res(int n){
         int sum =0;
         while(n>0){
            sum=sum+(n%10);
            n=n/10;
        }
    return sum;
    }
};

int main(){
    int num;
    cout<<"enter a number";
    cin>>num;
    sum_no obj1;
    cout<<"sum of digit=:"<<obj1.res(num);
return 0;
}