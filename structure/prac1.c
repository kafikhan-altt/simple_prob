#include<stdio.h>

struct vector{
    int x;
    int y;
};  

int main(){

    struct vector v1={10,20};
    struct vector *ptr;
    ptr=&v1;

    printf("Using struct variable v1: x=%d y=%d\n",v1.x,v1.y);
    printf("Using pointer ptr: x=%d y=%d\n",ptr->x,ptr->y);

    return 0;
}