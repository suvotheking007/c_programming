/*
Write a program to add first seven terms of the following series
1/1!  2/2!  3/3! ........
using a for loop:
*/

#include <stdio.h>

int main()
{
    double sum = 0, num, fact_num, count;

    for ( num = 1.0; num <= 7.0 ; num++)
    {
        fact_num = 1.0;

        for ( count = 1.0; count <= num ; count++)
        {
            fact_num = fact_num * count;
            printf("\n %lf", count);
        }
        
        sum = sum + num/fact_num;
    }
    printf("\n Sum = %.3lf", sum);
    return 0;
    
}