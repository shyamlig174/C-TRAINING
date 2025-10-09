#include<stdio.h>
#include<limits.h>

int main(){
    int arr[5]={-1,-2,-3,-4,-5};
    int maxsum=INT_MIN,currsum=0;
    for(int i=0;i<5;i++)
    {
        
        currsum=currsum+arr[i];
        if(maxsum<currsum)
        {
            maxsum=currsum;
        }
        if(currsum<0)
        {
            currsum=0;
        }



    }
    printf("Max = %d",maxsum);

    
}