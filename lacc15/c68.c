#include<stdio.h>
#include<limits.h>

int   BSearch(){
   int arr[6]={1,2,3,4,5,6};
 int target=11;
 int s=0;
 int end=5;
 while(s<=end)
 {
    int mid=(s+end)/2;
    if(arr[mid]==target){
        return mid;
        // printf("%d",mid);
    }
    else if(arr[mid]<target){
        s=mid+1;
    }


 }
 return -1;



}

 void p(int *a){
    *a=100;
    printf("%d",*a);

 }
int main(){
    int a=5;

    p(&a);
    printf("%d",a);
    // int *b=&a;
    //printf("%d",&a);
}