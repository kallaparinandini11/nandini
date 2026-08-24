#include<stdio.h>
int main(){
int arr[8]={11,24,31,45,53,61,72,90};
int low=0;
int high=7;
int mid;
int key=31;
while(low<=high){
mid=(low+high)/2;
if(arr[mid]==key){
printf("found the number:%d at index %d",key,mid);
break;
}
else if(arr[mid]>key){
high=mid-1;
}else{
low=mid+1;
}
}
return 0;
}



