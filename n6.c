#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
int main(){
struct Node *head=NULL;
struct Node *second;
struct Node *third;
struct Node *fourth;
struct Node *temp;
head=malloc(sizeof(struct Node));
second=malloc(sizeof(struct Node));
third=malloc(sizeof(struct Node));
fourth=malloc(sizeof(struct Node));
head->data=11;
head->next=second;

second->data=31;
second->next=third;

third->data=14;
third->next=fourth;

fourth->data=5;
fourth->next=NULL;
temp=head;
while(temp!=NULL){
printf("%d ",temp->data);
temp=temp->next;
}
return 0;
}







