//WAP to input cost price and selling price of a product and check profit or loss. Also calculate total profit and loss.
 
#include<stdio.h>
int main()
{
    float SP,CP,a;

    printf("Enter a COAST PRICE =");
    scanf("%f",&CP);
    printf("Enter a SELLING PRICE =");
    scanf("%f",&SP);

    a=SP-CP;

    if(a>=CP)
    {
        printf("You are in Profit");
    }
    else
    if(a<=CP)
    {
        printf("You are in Loss");
    }
}