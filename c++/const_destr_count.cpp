#include<iostream>
using namespace std;

class counter{
    static int count;
    public:
      counter(){
        count++;
        cout << "Object created. Total = " << count << endl;
      }
      ~counter(){
        cout << "Object destroyed. Total = " << count << endl;
        count--;
      }
};

int counter::count=0;

int main(){
    counter c1;
    counter c2;
    counter c3;
    return 0;
}