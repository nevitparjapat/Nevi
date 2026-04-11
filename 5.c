/*WAP to determine if a person is a child ,teenager ,adult or senior based on their age
Age<=12: “child
Age<=19: “teenager”
Age<=64: “adult”
Age>=64: “senior”*/

#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age=");
    scanf("%d",&age);

    if(age<=12)
    {
        printf("you are child\n");
    }
    else 
    if(age<=19)
    {
        printf("you are teenager\n");
    }
    else
    if(age<=64)
    {
        printf("you are Adult\n");
    }
    else
    if("age>=64")
    {
        printf("you are Senior\n");
    }
    printf("FIR AAYE GAA");
    return 0;
}