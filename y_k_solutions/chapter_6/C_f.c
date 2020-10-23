/*
According to a study, the approximate level of intelligence of a
person can be calculated using the following formula:
i = 2 + ( y + 0.5 x )
Write a program that will produce a table of values of i, y and x,
where y varies from 1 to 6, and, for each value of y, x varies from
5.5 to 12.5 in steps of 0.5.
*/

#include <stdio.h>
int main()
{
    float i, x, y;
    printf("\n i\t y\t x\t");

    for ( y = 1; y <= 6; y++)
    {
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            i = 2 + ( y + 0.5 * x );

            printf("\n %.2f\t %.2f\t %.2f\t", i, y, x);
        }
        
    }
    printf("\n");
    return 0;
    
}