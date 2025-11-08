#include <stdio.h>
#include <string.h>
int main(){
    char str[]="harry";
    int i=0;
   int count=0;

    for (i=0; i<strlen(str); i++){
          if (str[i]=='w'){
            count++;
          }
        
    }

    printf("%d", count);
    return 0;
}