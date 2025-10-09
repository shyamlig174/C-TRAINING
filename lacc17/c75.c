#include<stdio.h>
int sum(int *x,int *y){
    *x=50;
    *y=50;
    int c=(*x)+(*y);
    return c;
}

int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("%d %d",*x,*y);
}
int main(){

    int n =-1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("not prime");
            break;
        }
        else{
            printf("prime");
            break;
        }
    }
    return 0;
}