#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
       struct node *next;  
    };
    struct node*A;
    A=NULL;
    struct node*temp;
    temp =(struct node *)malloc(sizeof(struct node));
    temp->data=30;
    temp->next=NULL;
    A=temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=40;
    temp->next=NULL;
    struct node *temp1=A;
    temp1->next=temp;
    temp1=temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=50;
    temp->next=NULL;
    temp1->next=temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=20;
    temp->next= A;
    A=temp;
    temp1=A;
    while(temp1->next!=0){
        printf("%d->",temp1->data);
        temp1=temp1->next;

    }
printf("%d",temp1->data);

    return 0;
}