/*
If value of an angle is input through the keyboard, write a program
to print all its Trigonometric ratios.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double theta;

    //Taking values from the user
    printf("\n Please enter the value in degrees :- ");
    scanf("%lf", &theta);

    printf("\n Here goes your list ------->>>>>");
    printf("\n Trigonometry_ratio \t value");
    printf("\n");
    printf("\n sine \t\t\t %lf", sin(theta));
    printf("\n cosine \t\t %lf", cos(theta));
    printf("\n tangent \t\t %lf", tan(theta));
    printf("\n cosecant \t\t %lf", 1/sin(theta));
    printf("\n secant \t\t %lf", 1/cos(theta));
    printf("\n cotangent \t\t %lf \n ", 1/tan(theta));

    return 0;
}