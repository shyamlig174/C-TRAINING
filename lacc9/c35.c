//Q)      A
//      B C D
//    E F G H I
//  J K L M N O p
//Q R S T U V W X Y

#include<stdio.h>
int main()
{
    int ch=65;
    for(int i=0;i<5;i++)
    {
        for(int j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf(" %c",ch++);
        }
        for(int l=1;l<=i;l++)
        {
            printf(" %c",ch++);
        }
        printf("\n");
    }
}