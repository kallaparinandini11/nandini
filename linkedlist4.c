#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
int main(){
int n;
struct node *head=NULL;
struct node *newnode;
struct node *temp;
printf("enter the n value: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
newnode=malloc(sizeof(struct node));
printf("enter the data: ");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL){
head=newnode;
}
else{
temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newnode;
}
}
temp=head;
while(temp!=NULL){
printf("Before deletion : ");
printf("%d ",temp->data);
temp=temp->next;
}
temp=head;
head=head->next;
free(temp);
temp=head;
while(temp!=NULL){
printf("After deletion: ");
printf("%d \n",temp->data);
temp=temp->next;
}
return 0;
}

