/*
Given three points (x1, y1), (x2, y2) and (x3, y3), write a program 
to check if all the three points fall on one straight line.

---------------------------
Condition for the co-linearity of three points
Consider 3 points ->
A , B , C 
and slope between two points are represented such as "AB" slope between A and B
then,

if AB = AC = BC

then the three points are colinear


*/

#include <stdio.h>

int main()
{
    double x1, y1, x2, y2, x3, y3;
    double ab, bc, ca;

    //entering user input
    printf("\n Enter the x and y coordinate values of \n the first point write them by giving a space between them :- ");
    scanf("%lf %lf", &x1, &y1);
    printf("\n Enter the x and y coordinate values of \n the second point write them by giving a space between them :- ");
    scanf("%lf %lf", &x2, &y2);
    printf("\n Enter the x and y coordinate values of \n the third point write them by giving a space between them :- ");
    scanf("%lf %lf", &x3, &y3);

    //calculating ab -> the slope between first and the second point
    ab = (y2 - y1)/(x2 - x1);

    //calculating bc -> the slope between first and the second point
    bc = (y3 - y2)/(x3 - x2);

    //calculating ab -> the slope between first and the second point
    ca = (y1 - y3)/(x1 - x3);

    if (ab == ca == bc )
    {
        printf("\n Yes those points are colinear ");
    }
    else
    {
        printf("\n No they are not collinear ");
    }
    printf("\n");
    return 0;
}