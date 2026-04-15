//WAP to determine if a triangle is equilateral,isosceles or scalene

#include<stdio.h>
int main()
{
    int t,a,b,c;
    printf("Enter Side A\n");
    scanf("%d",&a);
    printf("Enter Side B\n");
    scanf("%d",&b);
    printf("Enter Side C\n");
    scanf("%d",&c);
   

    if(a==b==c)
    {
        printf("This is Equilateral Triangle");
    }
    else
    if(a==b || a==c || b==c)
    {
        printf("This is Isoscale Triangle");
    }
    else
    if(a!=b!=c)
    {
        printf("This is Scalene Traingle");
    }

    
}