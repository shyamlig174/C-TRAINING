#include<stdio.h>
int main(){
    int letMax[6];
    int height[6]={4,2,0,3,2,5};
    int rightMax[6];
    int water=0;
    letMax[0]=height[0];
    for(int i=1;i<6;i++){
        if(height[i]>letMax[i-1]){
            letMax[i]=height[i];
        }else{
            letMax[i]=letMax[i-1];
        }
    }
    rightMax[5]=height[5];
    for(int i=3;i>0;i--){
        if(height[i]>rightMax[i-1]){
            rightMax[i]=rightMax[i-1];
        }
    }
    for(int i=0;i<6;i++){
        int minHeight;
        if(letMax[i]<rightMax[i]){
            minHeight=letMax[i];
        }else
        {
            minHeight=rightMax[i];
        }water=water+(minHeight-height[i]);

    }
    printf("%d",water);
    return 0;
}