/*
Any integer is input through the keyboard. Write a program to find 
out whether it is an odd number or even number.
*/

#include <stdio.h>

int main()
{
    int i ;

    //Taking the input from the user
    printf("\n Please enter the integer number :- ");
    scanf("%d", &i);

    //condition started
    if ( i % 2 == 0)
    {
        printf("\n The entered number is an even number ");
    }
    else
    {
        printf("\n The entered number is an odd number ");
    }

    printf("\n");

    return 0;
    
    
}