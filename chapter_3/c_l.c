/*
Given a point (x, y), write a program to 
find out if it lies on the X-axis, Y-axis or on the origin.
*/

#include <stdio.h>

int main()
{
    float x, y;

    printf("\n Enter the coordinates of the point :- ");
    scanf("%f %f", &x, &y);


    if (x == 0.0 && y != 0.0 )
    {
        printf("\n The point is on y axis ");
    }
    else
    {
        if (x != 0.0 && y == 0.0)
        {
            printf("\n The point is on x axis ");
        }
        else
        {
            printf("\n The point is on origin");
        }
    }

    printf("\n");

    return 0;
    
    
}