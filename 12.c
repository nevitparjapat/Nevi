// WAP which will input 3 angle and determine if they form a triangle or not.

#include<stdio.h>
int main()
{
    float a,b,c,s;
    
    printf("Enter 1st Angle");
    scanf("%f",&a);
    printf("Enter 2nd Angle");
    scanf("%f",&b);
    printf("Enter 3rd Angle");
    scanf("%f",&c);
    s=a+b+c;


    if(s==180.0 )
    {
        printf("IT IS TRIANGLE");
    }
    else
    {
        printf("IT IS NOT A TRIANGLE");
    }
}