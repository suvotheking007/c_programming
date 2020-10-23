/*
If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is valid or not. The 
triangle is valid if the sum of two sides is greater than the largest of 
the three sides.
*/

#include <stdio.h>

int main()
{
    float side_1, side_2, side_3;

    printf("\n Enter the first side :- ");
    scanf("%f", &side_1);
    printf("\n Enter the second side :- ");
    scanf("%f", &side_2);
    printf("\n Enter the third side :- ");
    scanf("%f", &side_3);

    if ((side_1 + side_2) > side_3)
    {
        printf("\n the sides will form a valid triangle");
    }
    else
    {
        printf("\n Not a valid triangle");
    }
    
    
    printf("\n");
    return 0;

}