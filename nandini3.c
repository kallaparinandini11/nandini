#include<stdio.h>
int main(){
char arr[9]={'a','b','h','c','n','l','k','f','r'};
for(int i=8;i>=0;i--){
for(int j=i-1;j>=0;j--){
if(arr[i]==arr[j]){
printf("last repeated character is:%c",arr[i]);
return 0;
}
}
}
printf("there is no repeated characters");
return 0;
}

