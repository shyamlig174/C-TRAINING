#include<stdio.h>
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("*");
        for(int j=3;j>i;j--)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(int i=0;i<4;i++)
    {
        for(int j=3;j>+i;j--)
        {
            printf(" ");
        }
        printf("*");
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
     }
}