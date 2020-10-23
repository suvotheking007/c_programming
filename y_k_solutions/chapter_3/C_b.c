/*
Any integer is input through the keyboard. Write a program to find 
out whether it is an odd number or even number.
*/

/*------In C_b_v2.c----(i % 2 == 0)-- is used for condition,
                                    see that for modification*/

#include <stdio.h>

int main()
{
    int i;

    printf("\n Please enter an integer number :- ");
    scanf("%d", &i);

    if ( i % 2) 
    {
        printf("\n The entered number is an odd number");
    }
    else
    {
        printf("\n The entered number is an even number");
    }

    printf("\n");

    return 0;
    
}