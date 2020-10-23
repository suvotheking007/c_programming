/*
The length and breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of
the circle.
*/

//----------------------------------------
//This program can be improved although this method is not so bad
/* Here you can use any exponential 
   function (either local or custom made) */
//----------------------------------------------

#include <stdio.h>

int main()
{
    float length, breadth, radius;

    printf("\n Enter the Length of the rectangle :- ");
    scanf("%f", &length);

    printf("\n Enter the Breadth of the rectangle :- ");
    scanf("%f", &breadth);

    printf("\n Enter the Radius of the circle :- ");
    scanf("%f", &radius);

    //calculation of rectangle area
    float area;
    area = length * breadth;
    
    //calculation of rectangle perimeter
    float perimeter;
    perimeter = (length + breadth)*2;

    //calculation of circle area
    float circ_area,radius_squared;
    circ_area = (22*radius*radius)/7;

    //calculation of circle circumference 
    float circumference;
    circumference = 2*(22/7)*radius;

    printf("\n Rectangle area :- %f \n Rectangle perimeter :- %f \n Circle area :- %f \n Circle circumference :- %f \n ", area, perimeter, circ_area, circumference );

    return 0;
}