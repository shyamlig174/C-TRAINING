#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("Enter first numbers : ");
    scanf("%d",&a);
    printf("Enter second numbers : ");
    scanf("%d",&b);

    printf("Enter your choice : ");
    scanf("%c",&ch);
    if(ch=='+')
    {
        printf("\nThe addition of two numbers : %d",a+b);
    }
    else if(ch=='-')
    {
        printf("\nThe substraction of two numbers : %d",a-b);
    }
    else if(ch=='*')
    {
        printf("\nThe division of two numbers : %.2f",(float)a/b);
    }
    else
    {
        printf("\nInvalid input");
    }
}