#include<stdio.h>
int magic(int n)
{
    int sum=0;
    int b=n;
    
    for(sum=0;b!=0;b=b/10)
    {
        int last=b%10;
        sum=sum+last;
    }
    if(sum>=10)
    {
        b=sum;

        
    }
    else
    {
        if(sum==1)
          printf("magic");
        else
          printf("not magic") ; 
    }
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    magic(n);
}