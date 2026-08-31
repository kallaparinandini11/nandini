#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
int main(){
int n=5;
struct node *head=NULL;
struct node *second;
struct node *third;
struct node *fourth;
struct node *fifth;
struct node *temp;

head=malloc(sizeof(struct node));
second=malloc(sizeof(struct node));
third=malloc(sizeof(struct node));
fourth=malloc(sizeof(struct node));
fifth=malloc(sizeof(struct node));
head->data=12;
head->next=second;
second->data=11;
second->next=third;
third->data=31;
third->next=fourth;
fourth->data=7;
fourth->next=fifth;
fifth->data=5;
fifth->next=NULL;
temp=head;
while(temp!=NULL){
printf("%d ",temp->data);
temp=temp->next;
}
return 0;
}
