/*
Write a program to find the factorial value of any number entered 
through the keyboard.
*/

#include <stdio.h>

int main()
{
    int num, factor, loop_count = 1, result_count = 1;

    printf("\n Please enter a number :- ");
    scanf("%d", &num);

    while (loop_count <= num)
    {
        if (num % loop_count == 0)
        {   
            factor = num / loop_count;
            printf("\n The factor number %d is :- %d ", result_count,factor);

            result_count = result_count + 1;
        }

        loop_count = loop_count + 1;
        
    }

    printf("\n");
    return 0;    
    
}