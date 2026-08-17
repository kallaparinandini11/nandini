#include <stdio.h>

int main() {
   int arr[5]={11,31,34,23,24};
int largest=arr[0];
int second=arr[0];
for(int i=1;i<5;i++){
if(arr[i]>largest){
second=largest;
largest=arr[i];
}
for(int j=1;j<5;j++){
if(arr[j]>second && arr[j]!=largest){
second=arr[j];
}
}
}
    return 0;
}
