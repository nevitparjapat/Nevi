//  WAP that accepts three numbers and check all numbers are equal or not.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter a number");
    scanf("%d",&b);
    printf("Enter a number");
    scanf("%d",&c);

    if(a==b && b==c && c==a)
    {
        printf("All Numbers are Equal");
    }
    else
    {
        printf("Numbers are Not Equal");
    }
}