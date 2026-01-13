union 
{
    struct book
    {
      char title[100];
      int page;
      int price;
        /* data */
    }b1;
    struct magazine
    {
      char title[100];
      int page;
      int price;
    } m1;
    
    /* data */
}w1;


#include<stdio.h>

int main(){


w1.b1.page = 100;
w1.m1.price = 50;   
printf("Book Page: %d\n",w1.b1.page);
printf("Magazine Price: %d\n",w1.m1.price);


    return 0;
}