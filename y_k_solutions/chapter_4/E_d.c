/*
Write a program to receive value of an angle in degrees and check 
whether sum of squares of sine and cosine of this angle is equal to 
1.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double angle;

    printf("\n Please enter the value of the angle that needs to be verified :- ");
    scanf("%lf", &angle);

    ( pow(sin(angle),2) + pow(cos(angle),2) == 1 ) ? printf("\n yes the sum is equal to 1") : printf("\n No the sum is not equal to 1") ;

    printf("\n");
    return 0;
}