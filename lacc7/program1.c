#include<stdio.h>
int isprime=1;
if(n<=1){
    printf("prime no nhi hai");
    return 0;
}
for(int i=2; i<n; i++){
    if(n%i==0){
        isprime=0;
        break;
    }
}
if(isprime){
    printf("prime no haiii");

}else
{
    printf("prime no nhi hai");
    return 0;
}
