// WAP to check if a number is positive ,negative or zero

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number");
    scanf("%d",&num);

    if(num > 0)
    {
        printf("Number is Positive");
    }
    else 
    if(num<0)
    {
        printf("Number is Negative");
    }
    else
    if(num==0)
    {
        printf("Number is ZERO");
    }
    else
    {
        printf("it not a number");
    }
return 0;
    }