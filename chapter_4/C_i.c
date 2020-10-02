/*
Given the length and breadth of a rectangle, write a program to find 
whether the area of the rectangle is greater than its perimeter. For 
example, the area of the rectangle with length = 5 and breadth = 4 
is greater than its perimeter.
*/

#include <stdio.h>

int main()
{
    int length, breadth, perimeter, area;

    printf("\n Please enter the length of the rectangle :- ");
    scanf("%d", &length);
    printf("\n Please enter the breadth of the rectangle :- ");
    scanf("%d", &length);

    //calculation of perimeter --
    perimeter = 2 * (length + breadth);

    //calculation of area --
    area = length * breadth ;

    if (area > perimeter)
    {
        printf("\n Area of the rectangle is greater than its perimeter");
    }
    else
    {
        printf("\n The area of the rectangle is smaller than it's perimeter");
    }
    printf("\n");

    return 0;
    
    
}