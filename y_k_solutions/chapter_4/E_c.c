/*
Write a program to find the greatest of the three numbers entered 
through the keyboard. Use conditional operators.
*/

#include <stdio.h>

int main()
{
    int a, b, c, max;

    printf("\n please enter the 1st number :- ");
    scanf("%d", &a);
    printf("\n please enter the 2nd number :- ");
    scanf("%d", &b);
    printf("\n please enter the 3rd number :- ");
    scanf("%d", &c);

    (a < b) ? (max = b) : ( ( b < c ) ? ( max = c ) : ( max = a ) );

    printf("\n The maximum value among the three is %d ", max);
    printf("\n");

    return 0;
}