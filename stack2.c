#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *top=NULL;
void push(int value){
struct node *newnode=malloc(sizeof(struct node));
if(newnode==NULL){
printf("stack is overflow");
}else{
newnode->data=value;
newnode->next=top;
top=newnode;
printf("%d is pushed into the stack\n",value);
}
}
void pop(){
struct node *temp;
if(top==NULL){
printf("stack is underflow");
}else{
temp=top;
printf("%d is poped from the stack",top->data);
top=top->next;
free(temp);
}
}
void display(){
if(top==NULL){
printf("stack is empty");
}else{
temp=top;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
}
}
int main(){
push(109);
push(100);
push(34);
pop();
display();
pop();
return 0;
}


