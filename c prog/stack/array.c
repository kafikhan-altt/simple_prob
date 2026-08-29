#include<stdio.h>
#define MAX 5

int stack[MAX];
int top=-1;

void push(){
    int item;
    if(top==MAX-1){
        printf("stack overflow");
    }
    else{
        printf("enter the item to push");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }
}
void pop(){
     if(top==-1){
        printf("underflow");
     }
     else{
        printf("popped element %d",stack[top]);
        top--;
     }
}
void display(){
    int i;
    if(top==-1){
        printf("underflower");
    }
    for(int i=top;i>=0;i--)
    printf("%d",stack[i]);
}

int main(){
    int choice;
    do
    {
    printf("1 push \n 2 pop \n3 diplay \n4 exit");
    printf("enetr choice");
    scanf("%d",&choice);
    switch(choice){
    case 1:
            push();
            break;
    case 2:
            pop();
            break;
    case 3:
           display();
           break;
    case 4:
        printf("exiting");
           break;
    default:
        printf("invaild choice");
    }
    } while (choice!=4);
return 0;    
}