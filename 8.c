#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, arr[40],count=0;
    struct node{
        int data;
        struct node*next;
    };
   struct node*A=NULL;
for(i=0;i<5;i++){
     printf("enter the data for the nodes");
     scanf("%d",&arr[i]);
     }
     struct node*temp=malloc(sizeof(struct node));
     A=temp;
     A->data=arr[0];
     A->next=NULL;
    
     struct node*temp1=A;
     
   for(i=1;i<5;i++){
    temp=malloc(sizeof(struct node));
    temp->data=arr[i];
    temp1->next=temp;
    temp1=temp1->next;
   }
    temp->next=NULL;

temp1=A;
while(temp1->next!=0){
    temp1=temp1->next;
    count++;

}
printf("%d",count+1);
    return 0;
}