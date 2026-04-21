
//WAP that reads 2 numbers and an arithmetic operator like +,-,*,%and display the computed result

#include<stdio.h>
int main()
{
    float a,b,add,sub,mul,div;
    printf("Enter the 1st Number");
    scanf("%f",&a);
    printf("Enter the 2nd Number");
    scanf("%f",&b);
    
    printf("The All Alogorithm is this ");
    add=a+b;
    printf("The Addition is=%f\n",add);
    sub=a-b;
    printf("The Substraction is=%f\n",sub);
    mul=a*b;
    printf("The Multipication is=%f\n",mul);
    div=a/b;
    printf("The Division is =%f",div);



}