/*
Any year is entered through the keyboard, write a program to 
determine whether the year is leap or not. Use the logical operators 
&& and ||.
*/

/*
To determine whether a year is a leap year, follow these steps:

step 1 --> If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
step 2 --> If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
step 3 --> If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
step 4 --> The year is a leap year (it has 366 days).
step 5 --> The year is not a leap year (it has 365 days).
*/

//----In D_a.c The code is written using the logical operators ------

#include <stdio.h>

int main()
{
    int year;

    printf("\n Please enter the year that needs to be verified :- ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("\n The entered year is a leap year !");
            }
            else
            {
                printf("\n The entered year is not a leap year !");
            }
               
        }
        else
        {
            printf("\n The entered year is a leap year !");
        }
    }
    else
    {
        printf("\n The entered year is not a leap year");
    }

    printf("\n");
    return 0;
    
}