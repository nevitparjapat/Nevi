/*WAP to determine grade based on marks.
Marks>=90:grade A 
Marks>=80:grade B 
Marks>=70:grade C 
Marks>=60:grade D 
Otherwise,
Grade E*/

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter a Marks");
    scanf("%d",&marks);

    if(marks>=90)
    {
        printf("Got A Grade");
    }
    else
    if(marks>=80)
    {
        printf("Got B Grade");
    }
    else
    if(marks>=70)
    {
        printf("Got C Grade");
    }
    else 
    if(marks>=60)
    {
        printf("Got D Grade");
    }
    else
    printf("Got E Grade");

    printf("THANK YOUU");

}
