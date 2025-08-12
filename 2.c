#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*createnode(int value){
    printf("enter the value of node");
    scanf("%d",&value);
 struct node* head =malloc(sizeof(struct node));

head->data=value;
return head;
}
int main(){
    struct node*b;
   b=createnode(25);
    printf("%d",b->data);
}