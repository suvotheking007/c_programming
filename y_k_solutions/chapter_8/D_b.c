/*
Write a function power ( a, b ), to calculate the value of a raised to
b.
*/

#include <stdio.h>

int power(int, int);


void main()
{   
    int a, b, p;

    printf("\n please enter the number :- ");
    scanf("%d", &a);
    printf("\n please enter power number :- ");
    scanf("%d", &b);

    p = power(a, b);

    printf("\n The value is :- %d",p);
    printf("\n");
}


int power(int a, int b)
{
    
    int power_value = 1;

    for (int i = 1; i <= b ; i++)
    {
        power_value *= a;
    }
    

    return( power_value );
}