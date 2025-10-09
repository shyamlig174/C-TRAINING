#include<stdio.h>
int main(){
    int x = 10;
    int *p =&x;
    int **k=&p;
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,4,5};
    int *p1=arr1;
    int *p2=arr2;
    int flag=1;
    for(int i=0;i<5;i++){
        if(*(p1+i)!=*(p2+i)){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("arrays are equal\n");
    }else{
        printf("arrays are not equal\n");

    }
    return 0;
}
    