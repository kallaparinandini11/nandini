#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value){
if(top==size-1){
printf("Stack is overflow");
}else{
top++;
stack[top]=value;
printf("%d has push into the stack\n",value);
}
}
void pop(){
if(top==-1){
printf("stack is underflow");
}else{
printf("%d has poped from the stack\n",stack[top]);
top--;
}
}
void display(){
if(top==-1){
printf("stack is empty");
}else{
printf("%d\n",stack[top]);
}
}
int main(){
push(20);
push(31);
push(11);
display();
pop();
display();
push(7);
return 0;
}
