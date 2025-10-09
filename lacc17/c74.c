#include<stdio.h>
int sum(int *a,int *b){
    *a=20;
    *b=10;
            int sum=(*a)+(*b);
    return sum;

}
int main(){
    int a=5;
    int b=10;
   int data= sum(&a,&b);
   printf("%d",data);
   printf("%d",a+b);

   int x=5;
   int *ptr=&x; //renamed pointer to 'ptr

   printf("%d",x);
   printf("%d",&x);
   printf("%d",*ptr);
   printf("%d",ptr);

   return 0;
}