/*
Given the coordinates (x, y) of center of a circle and its radius, write 
a program that will determine whether a point lies inside the circle, 
on the circle or outside the circle. 

(Hint: Use sqrt( ) and pow( ) functions)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, radius ;

    //initial value input by user for the 
    //circle radius and the coordinates
    //of the center-------->>>>>>>>>>>>>>>>>>

    printf("\n Please enter the coordinates of the center of the circle :- ");
    scanf("%lf %lf", &x1, &y1);
    printf("\n Please enter the radius of the desired circle :- ");
    scanf("%lf", &radius);
    //----------------------->>>>>>>>>>>>>>>>>>



    //Entering the coordinates value of the point that needs to be
    //verified----------------->>>>>>>>>>>>>>>>>

    printf("\n---------------------");
    printf("\n-----NOW ENTER-------");
    printf("\n-----THE COORDINATES-");
    printf("\n-----OF ANY POINT----");
    printf("\n---------------------");
    printf("\n");
    printf("\n Please enter the coordinates of a point :- ");
    scanf("%lf %lf", &x2, &y2);
    //-------------------------->>>>>>>>>>>>>>>>

    
    //Condition started for verification ------------------>>>>>>>>>>

    if ( sqrt(pow((x2-x1),2) + pow((y2-y1),2)) <= radius )
    {
        printf("\n The points lies inside the circle :- ");
    }
    else
    {
        printf("\n The points lies outside the circle");
    }

    printf("\n");

    return 0;
}