/*
Population of a town today is 100000. The population has increased
steadily at the rate of 10 % per year for last 10 years. Write a
program to determine the population at the end of each year in the
last decade.
*/

#include <stdio.h>

int main()
{
    float pop = 100000;

    for (int i = 9; i >= 1; i--)
    {
        pop = pop - (pop * 0.1);
        printf("\n The population by the end of %dth year was :- %.2f", i,pop);
    }
    printf("\n");
    return 0;
    
}