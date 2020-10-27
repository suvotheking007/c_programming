/*
Write a function to compute the greatest common divisor given by
Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows:
1980 / 1617 = 1      1980 – 1 * 1617 = 363
1617 / 363 = 4       1617 – 4 * 363 = 165
363 / 165 = 2        363 – 2 * 165 = 33
5 / 33 = 5           165 – 5 * 33 = 0

Thus, the greatest common divisor is 33.
*/

#include <stdio.h>

void gcd(int, int, int*);

void main()
{
    int a, b, result;

    printf("\n please enter the first number :- ");
    scanf("%d", &a);
    printf("\n please enter the second number :- ");
    scanf("%d", &b);

    gcd(a, b, &result);

    printf(" Greatest common devisor is %d", result );
    printf("\n");
}

void gcd(int a, int b, int *result)
{
    int j, c;

    while(1)
    {   
        j = a / b;
        c = b;
        *result = b;
        b = a - j * b;
        a = c;

        if (b == 0)
        {
            break;
        }
        
        
    }
}