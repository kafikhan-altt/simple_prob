#include <stdio.h>
#include <string.h>

int main(){
    char str[]="harry";
    int contain=0;
    
    for (int i =0; i< strlen(str); i++){
        if (str[i]=='r'){
            contain =1;
            break;
        }
    }

    if (contain){
        printf("the character is present");
    }
    else{
        printf("the character is absent");
    }


    return 0;
}