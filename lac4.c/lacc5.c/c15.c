//code 1 11: Even numbers
// #include<stdio.h>
// int main()
//{
//   int i;
//   printf("The even numbers : ");
//   for(i=0;i<=10;i++)
//    if(i%2==0)
//      printf("\n%d",i);

//}

//code 2 : Reverse loop
// #include<stdio.h>
// int main()
// {
//    int i;
//    ptontf("The even numbers : ");
//      for(i=10;i>=0;i--)
//            printf("\n%d",i);
// }

//code 3 : Sum till 10
// #include<stdio.h>
// int main()
// {
//    int i,sum;
//    printf("The sum of numbers till 10 :");
//    for(sum=0,i=0;i<=10;i++)
//    {
//        sum=sum+i;
//    }
//    printf("\nSum = %d",sum);
// }

//code 4 : Aprach 2
#include<stdio.h>
int main()
{
    int num,lastdig,sum=0;
    printf("Enter Number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        lastdig=num%10;
        num=num/10;
        sum=sum+lastdig;
    }
    printf("sum of digits = %d",sum);
}