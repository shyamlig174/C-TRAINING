#include<stdio.h>
#include<limits.h>

int main(){
    int arr[6]={0,5,-5,3,-4,-5,-7};
    int maxSum=INT_MIN;

    for(int i=0;i<6;i++){
        int currSum=0;
        for(int j=i;j<6;j++){
            currSum=currSum+arr[j];
            if(currSum>maxSum){
                maxSum=currSum;
            }
        }
    }
    printf("%d",maxSum);
}