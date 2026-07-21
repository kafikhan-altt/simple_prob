#include<iostream>
#include<string>
using namespace std;

class info{
    private:
       int marks;
       string name;
    public:
       int get(){
        cout<<"enter marks";
        cin>>marks;
        cout<<"enter name";
        cin>>name;
        return 0;
       }
       void display_data(){
         cout<<"name: "<<name<<endl;
         cout<<"marks: "<<marks<<endl;
       }    
};

int main(){
    info obj1;
    obj1.get();
    obj1.display_data();
return 0;
}