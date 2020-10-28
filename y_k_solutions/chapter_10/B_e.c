/*
Write a recursive function to obtain the running sum of first 25
natural numbers.
*/

#include <stdio.h>

int rec_sum();

void main()
{
    int sum;
    sum = rec_sum();
    printf("\n Sum of first 25 natural numbers is :- %d", sum);

}

int i = 1, sum = 0;
int rec_sum()
{
    if( i <= 25)
    {
        sum = sum + i;
        i++;
        rec_sum();
    }
    else
    {
        return(sum);
    }
}