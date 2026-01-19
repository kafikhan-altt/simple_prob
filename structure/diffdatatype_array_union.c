typedef union{


 int a ;
 char b ;
 double  c;
}data;

int main(){

data arr[10];
arr[0].a =10;
arr[1].b ='a';
arr[2].c =3.102;
// and so on
return 0;

}

//union used will have 80 byte (abc=8=8bit highest one taken the arr 10*8)


//struct {

// int a ;
// char b ;
// double  c;
//}data;

//int main(){
//data arr[10];
//arr[0].a =10;
//arr[1].b ='a';
//arr[2].c =3.102
// and so on
//return 0;

//}
//this will have 130  (abc=4+1+8=13bit the arr 10*13)