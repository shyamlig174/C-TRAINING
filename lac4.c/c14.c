#include<stdio.h>
int main()
{
    int bal = 1000,ch,amt;
    printf("\nWelcome to ATM : ");
    printf("\n1.Check balance");
    printf("\n2.Deposite");
    printf("\n3.Withdraw");
    printf("\n4.Exit");
    printf("\nEnter Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("\nBalance = %d",amt);
                break;
        case 2: printf("\nEnter Amount : ");
                scanf("%d",&amt);
                bal=bal+amt;
                
                printf("\n%d is deposited\nCurrent Balance : %d",amt,bal);
                break;
        case 3: printf("\nEnter Amount : ");
                scanf("%d",&amt);
                if(bal<=amt)  
                {
                    bal=bal-amt;
                    printf("\n%d is deposited\nCurrent Balance : %d",amt,bal);
                } 
        case 4: printf("\nThank You For Visiting");
                break;
        deafault : printf("\nInvalid input");                     
    }
}