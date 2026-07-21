#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class student{
    string name;
    int roll;
    float marks;
    public:
    void getdata(){
        cout<<"enter name:", cin>>name;
        cout<<"enter roll no:",cin>>roll;
        cout<<"enter marks:", cin>>marks;
    }
    void writetofile(ofstream &fout){
        fout << name<<" "<<roll<<" "<<marks<<endl;
    }
};
int main(){
    student s[5];
    ofstream fout("student.txt");
    for(int i=0;i<5;i++){
        cout<<"\n enter details of student"<<i+1<<":\n";
        s[i].getdata();
        s[i].writetofile(fout);
    }
    fout.close();
    cout<<"\n --- record from file --\n";
    ifstream fin("student.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();

    return 0;
}
