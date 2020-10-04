/*
Any year is input through the keyboard. Write a program to 
determine whether the year is a leap year or not.
*/

#include <stdio.h>

int main()
{
    int year;

    //getting input from the user 
    printf("\n Please enter the year :-");
    scanf("%d", &year);

    //condition started
    if (year % 4 == 0)
    {
        printf("\n The entered year is a leap year ");
    }
    else
    {
        printf("\n The entered year is not a leap year ");
    }

    printf("\n");

    return 0;
    
    
}