#include <stdio.h>

int main(){
    
    int arr[] = {5, 3, 8, 9, 2};
    int n = sizeof(arr)/sizeof(arr[0]);     
    int x = 9;
    int found = 0;      
    
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }


    if(!found){
        printf("Element not found in the array\n");
    }

    
    printf("Search operation completed.\n");
    

    return 0;
}