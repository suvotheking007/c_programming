/*
The natural logarithm can be approximated by the following series
(x-1)/x + 1/2*pow((x-1)/x , 2) + 1/2*pow((x-1)/x , 3) + 1/2*pow((x-1)/x , 4) + .....

If x is input through the keyboard, write a program to calculate the
sum of first seven terms of this series.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double x, sum = 0;

    printf("\n Please enter the value of \"x\" :-");
    scanf("%lf", &x);

    for (double i = 1; i <= 7; i++)
    {
        if (i == 1.0)
        {
            sum = sum + (x-1)/x;
            continue;
        }
        
        sum = sum + pow( (x-1)/x , i );
    }

    printf("\n Sum of the first 7 terms of the series is :- %.2f", sum);
    printf("\n");
    return 0;
    
}