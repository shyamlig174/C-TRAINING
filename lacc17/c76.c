#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a[5]={1,-3,8,4,-11};
    int maxsum=0;
    for(int i=0;i<5;i++){
        int currentsum=0;
        for(int j=i;j<5;j++){
            currentsum=currentsum+a[j];
            if(currentsum>maxsum)
            maxsum=currentsum;
        }
    }
    printf("%d",maxsum);
       int x=10;
       int y=20;
       swap(&x,&y);
       printf("after swap: x=%d, y=%d\n",x,y);

       int arr[4]={1,2,3,4};
       int *p=arr;
       printf("%d",*(p+2));
       for(int i=0;i<4;i++){
        printf("%d",*(p+i));
       }
       return 0;
}