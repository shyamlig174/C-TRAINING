#include<stdio.h>
#include<limits.h>

int main(){
    int arr[5]={-8,2,-3,4,9};
    int maxsum=0;
    int currsum=0;
    for(int i=0;i<5;i++){
        currsum+=arr[i];
        if(currsum>maxsum){
            maxsum=currsum;
        }
        if(currsum<0){
            currsum=0;
        }
    }
    return 0;
}