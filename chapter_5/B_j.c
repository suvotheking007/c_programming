/*
Write a program to find the range of a set of numbers entered 
through the keyboard. Range is the difference between the smallest 
and biggest number in the list.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int num, min = INT_MIN, max = INT_MAX ;
    char opt = 'y';

    while (opt == 'y' || opt == 'Y')
    {   
        printf("\n Please enter an integer :-");
        scanf("%d", &num);

        if (num > min)
        {
            min = num;
        }
        else if (num < max)
        {
            max = num;
        }
        
        printf("\n Do you want to add another integer (y/n) : ");
        scanf(" %c", &opt);    
    }

    printf("\n Range of the numbers is :- %d", (min - max));
    printf("\n");
    return 0;
    
}