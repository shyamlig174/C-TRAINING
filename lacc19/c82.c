#include<stdio.h>
int main(){
    int arr[2][2]={{1,2},{3,4}};
    int arr1[4];
    int k=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr1[k]= arr[i][j];
            k++;
        }
    }
    for(int i=0;i<4;i++){
        printf("%d",arr[i]);
    }
    return 0;
}