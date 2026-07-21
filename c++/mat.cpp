#include<iostream>
using namespace std;

int main(){
    
    int **a=new int*[2];
    int **b=new int*[2];
    int **sum=new int*[2];
    int  **diff=new int*[2];

    for(int i=0;i<2;i++){
        a[i]=new int[2];
        b[i]=new int[2];
        sum[i]=new int[2];
        diff[i]=new int[2];
    }

    cout<<"enter the element of  matrix A:\n";
    for(int i=0;i<2;i++)
     for(int j=0;j<2;j++)
       cin>>a[i][j];

    cout<<"enter the element of  matrix A:\n";
    for(int i=0;i<2;i++)
     for(int j=0;j<2;j++)
       cin>>b[i][j];

     for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++){
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }

    cout << "\nSum:\n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) cout << sum[i][j] << " ";
        cout << endl;
    }

    cout << "\nDifference:\n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) cout << diff[i][j] << " ";
        cout << endl;
    }
     // free memory
    for(int i = 0; i < 2; i++){
        delete[] a[i]; delete[] b[i]; delete[] sum[i]; delete[] diff[i];
    }
    delete[] a; delete[] b; delete[] sum; delete[] diff;

    return 0;
}

