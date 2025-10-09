#include<stdio.h>
#include<limits.h>

int main(){
    int arr[5]={1,2,3,2,2};
    int isTrue=1;
    for(int i=0;i<5/2;i++){
        if(arr[i]!=arr[5-i-1]){
            isTrue=0;
        }
    }
    if(isTrue==1){
        printf("hiii");
    }else{
        printf("nhi haiiii");

        int arr[5]={10,20,30,40,50};
        int first=arr[0];
        for(int i=0;i<5;i++){
            arr[i]=arr[i+1];
        }
        arr[4]=first;

        for(int k=0;k<5;k++){
            printf("%d",arr[k]);
        }
    }
    return 0;
}