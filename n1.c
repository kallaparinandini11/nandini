#include<stdio.h>
int main(){
int arr[6]={10,11,31,86,43,56};
int l1=arr[0];
int largest=arr[0];
for(int i=1;i<6;i++){
if(arr[i]>largest){
l1=largest;
largest=arr[i];
} else if (arr[i] >l1 && arr[i] != largest) {
            l1 = arr[i];
}
}
printf("second largest number is: %d",l1);
return 0;
}
