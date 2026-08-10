#include<stdio.h>
int main(){
char arr[5]={'a','b','a','n','c'};
for(int i=0;i<5;i++){
for(int j=i+1;j<5;j++){
if(arr[i]==arr[j]){
printf("first repeated character is:%c",arr[i]);
return 0;
}
}
}
printf("there is no repeated character");
return 0;
}

