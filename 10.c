//.WAP which takes x and y as a input and determine the quadrant of a point in a coordinate system as per the given information below
//x>0, y>0: first quadrant
// x<0, y>0: second quadrant
//x<0, y<0: third quadrant
//x>0, y<0: fourth quadrant

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter thr value of X");
    scanf("%d",&x);
    printf("Enter the alue of Y");
    scanf("%d",&y);

    if(x>0 && y>0)
    {
        printf("It's First Quadrant");
    }
    else 
    if(x<0 && y>0)
    {
        printf("It's Second Quadrant");
    }
    else 
    if(x<0 && y<0)
    {
        printf("It's Third Quadrant");
    }
    else
    if(x>0 && y<0)
    {
        printf("It's Fourth Quadrant");
    }
}