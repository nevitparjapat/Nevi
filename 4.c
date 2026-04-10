//WAP to check if a number is divisible by both 3 and 5.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number =");
    scanf("%d",&num);

    if(num%3==0&&num%5==0)
    {
        printf("Number is Divivsible by both");
    }
    else
    {
        printf("Not Divisible");
    }
}