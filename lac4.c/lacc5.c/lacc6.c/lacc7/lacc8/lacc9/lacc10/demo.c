//#include<stdio.h>
//int main()
//{
//    int n,i;
//    printf("Enter a number : ");
 //   scanf("%d",&n);
//    if(i<2)
//    {
//        printf(" ");
//    }
//    for(int i=)
//}

//WAp to find the addition digits
//#include<stdio.h>
//int main()
//{
//    int n,rev=0,b;
 //   printf("Enter a number : ");
 //   scanf("%d",&n);
 //   b=n;
 //   for(b!=0;b=b/10)
 //   {
 //       int last=b%10;
 //       rev=rev*10=last;
 //   }
  //  printf("rev = %d",rev);
//}

//Digit count

#include<stdio.h>
int main()
{
    int n,count=0,b;
    printf("Enter a number : ");
    scanf("%d",&n);
    b=n;
    if(n==0)
    {
        count=1;
    }
    else
    {
        for(;b!=0;b=b/10)
        {
            int last=b%10;
            count++;
        }
    }
    printf("count = %d",count);
}
