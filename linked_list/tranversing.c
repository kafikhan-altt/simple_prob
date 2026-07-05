#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
void count_of_nodes(struct node *head){
    struct node *current=NULL;
    int count=0;

    if(head==NULL){
        PRINTF("EMPTY HAINNNN");
    }
    else{
        current=head;
        while(current!=NULL){
            
    }
    }



void print_data(struct node *head){
    struct node *current=NULL;

    if(head==NULL){
        printf("List is empty");
        return;
    }
    else{
        current=head;
        while(current!=NULL){
            printf("%d", current->data);
            current=current->link;
        }
    }
}
 


int main(){
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=NULL;
    current=malloc(sizeof(struct node));
    current->data=46;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=47;
    current->link=NULL;         
    head->link->link=current;

    return 0;
}