//.WAP to find the largest of three numbers

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter a number\n");
    scanf("%d",&b);
    printf("Enter a number\n");
    scanf("%d",&c);
    
   if (a > b)
    {
        if (a > c)
            printf("%d is the largest number\n", a);
        else
            printf("%d is the largest number\n", c);
    }
    else
    {
        if (b > c)
            printf("%d is the largest number\n", b);
        else
            printf("%d is the largest number\n", c);
    }

    return 0;
}