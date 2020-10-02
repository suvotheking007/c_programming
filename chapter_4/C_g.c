/*
Write a program to check whether a triangle is valid or not, when 
the three angles of the triangle are entered through the keyboard. 
A triangle is valid if the sum of all the three angles is equal to 180 
degrees.
*/
#include <stdio.h>
int main()
{
    int angle_1, angle_2, angle_3;

    printf("\n Please enter angle 1 :- ");
    scanf("%d", &angle_1);
    printf("\n Please enter angle 2 :- ");
    scanf("%d", &angle_2);
    printf("\n Please enter angle 3 :- ");
    scanf("%d", &angle_3);

    if ( (angle_1 + angle_2 + angle_3) <= 180)
    {
        printf("\n Yes it is a valid triangle !");
    }
    else
    {
        printf("\n No it is not a valid triangle !");
    }

    printf("\n");

    return 0;
    
    
}