/*
Write a C function to evaluate the series
sin( x ) = x - ( pow(x,3) / 3! ) + ( pow(x,5) / 5! ) - ( pow(x,7) / 7! ) ...
up to 10 terms.
*/

#include <stdio.h>
#include <math.h>

double factorial(int);
void series(float, float *);

void main()
{
    float x, radian, sin_x = 0.0;

    printf("\n Please enter the value of x :- ");
    scanf("%f", &x);
    radian = x * (3.14159 / 180.0); // Convert Degree To Radian

    series(radian, &sin_x);

    printf("\n sin(%f) = %f", x, sin_x);
    
}

double factorial(int a)
{
    double b = 1;

    for (int i = 1; i <= a; i++)
    {
        b *= i;
    }

    return(b); 
}

void series(float b, float *sin_x)
{
    int i, j = 1, sign = 1;

    for (i = 1; (i <= 10); i++)
    {
        *sin_x += sign * (pow( b, j ) / factorial(j));

        j += 2;
        sign *= -1;
    }
    
    
}
