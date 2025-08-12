#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,t,c;
    struct node{
        int data;
        struct node*next;
    };
   struct node*A=NULL;
   struct node*lastadd;
   struct node*as;
     struct node*temp=malloc(sizeof(struct node));
     A=temp;
     A->data=1;
     A->next=NULL;
    
     struct node*temp1=A;
   for(i=1;i<=5;i++){
    temp=malloc(sizeof(struct node));
    temp->data=i*10;
    temp1->next=temp;
    temp1=temp1->next;
   }
    temp->next=NULL;
    temp1=A;
    printf("enter the position");
    scanf("%d",&t);
     printf("enter the value");
    scanf("%d",&c);
for(i=0;i<t;i++){
    temp1=temp1->next;
if(i==t-2){
    lastadd=temp1->next;
}else if(i==t-1){
    as=temp1->next;
}
}
temp=malloc(sizeof(struct node));
temp->data=c;
temp->next=as;
lastadd->next=temp;
temp1=A;
while(temp1->next!=0){
    printf("%d->",temp1->data);
    temp1=temp1->next;

}
printf("%d",temp1->data);
    return 0;
}