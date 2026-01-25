#include<stdio.h>
#include<stdlib.h>


int main(){

 int n=10;
 int* ptr;
 ptr =(int*) malloc(n* sizeof(int));


 for(int i=0; i<n; i++){
      scanf("%d", &ptr[i]);
    }

 for(int i=0; i<n; i++){
      printf("%d \n", ptr[i]);
    }


n=15;

ptr=(int*) realloc(ptr, 15*sizeof(int));

 for(int i=0; i<n; i++){
      ptr[i]=7*(n+i);
    }

 for(int i=0; i<n; i++){
      printf("%d \n", ptr[i]);
    }

    free(ptr);



return 0;

}
