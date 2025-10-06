#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n<0)
       printf("\n%d is negative number",n);
    else if(n==0)
    {
        printf("\n%d is neither negative nor positive",n);
    } 
    else
    {
        printf("\n%d is positive number",n);
    }  
}