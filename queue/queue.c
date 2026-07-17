#include<stdio.h>
#define MAX 5
int front=-1,rear=-1,queue[MAX],item;
void enqueue(){
    if(rear==MAX-1){
        printf("overflow");
    }
    else{
        if(front=-1)
        front=0;
    }
        printf("enter");
        scanf("%d",&item);
        queue[++rear]=item;
    }

void dequeue(){
    if(front==-1||front>rear){
        printf("underfloow");
    }
    else{
        printf("deleted %d\n ",queue[front++]);
    }
}
void display(){
    int i;
    for(i=front;i<=rear;i++){
    printf("%d",queue[i]);
    printf("\n");
    }
}
int main(){

    int ch;
    do{
        scanf("%d",&ch);
        switch(ch){
            case 1:
              enqueue();
              break;
            case 2:
              dequeue();
            case 3:
              display();
              break;
        }
    }
    while(ch!=4);
}