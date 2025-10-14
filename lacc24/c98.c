#include<stdio.h>
#include<string.h>
int main(){
    int height[5]={2,4,2,5,1};
    int i=0;
    int j=4;
    int maxArea;
    while(i<j)
    {
        int h;
        if(height[i]<height[j]){
            h=height[i];
        }else{
            h=height[j];
        }
        int w=j-i;
        int area=h*w;
        if(area>maxArea){
            maxArea=area;
        }
        if(height[i]<height[j]){
            i++;
        }else{
            j--;
        }
    }
    printf("%d",maxArea);
    return 0;
}