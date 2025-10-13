#include<stdio.h>
#include<stdlib.h>

void freq(int *arr, int n){
    int visited[n];
    for(int i=0;i<n;i++)
    visited[i] = 0;

    for(int i=0;i<n;i++){
        if(visited[i] == 1)
        continue;
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d times\n",arr[i],count);
    }
}
int main(){
    int n;
    printf("enter size");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof (int));
    //int*arr=(int*)calloc(n,sizeof(int));
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    freq(arr,n);
    return 0;
}