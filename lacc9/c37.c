#include<stdio.h>
int main()
{
    int ch=65;
    for(int i=0;i<5;i++)
    {
        for(int j=0; j<=i;j++)
        {
            printf(" ");
        }
        for(int k=4;k>=i;k--)
        {
            printf("%c ",ch++);
        }
        for(int l=4; l>i;l--)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }
}
