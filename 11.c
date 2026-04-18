//. WAP to determine the season based on month 
//3<=month<=5;  “spring”
//6<=month<=8 “summer”
//9<=month<=11 “Autumn”
//Otherwise,
//“Winter”

#include<stdio.h>
int main()
{
    int month;
    printf("Enter your Month");
    scanf("%d",&month);


    if(month>=3 && month<=5)
    {
        printf("Its Spring");
    }
    else 
    if(month>=6 && month<=8)
    {
        printf("Its Summer");
    }
    else
    if(month>=9 && month<=11)
    {
        printf("Its Autum");
    }
    else
    if(month==12 || month==1 || month==2)
    {
        printf("Its Winter");
    }

    
}