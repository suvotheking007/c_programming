/*
Write a program to print out all Armstrong numbers between 1 and 
500. If sum of cubes of each digit of the number is equal to the 
number itself, then the number is called an Armstrong number. For 
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).
*/



#include <stdio.h>
#include <math.h>
int main()
{
    int num, digit, result_count = 1 , loop_count = 1 ;

    while ( loop_count <= 500 )
    {   
        //declaring a local variable and initiating it's value to 0
        /* This will reset any value present in "sum" after previous 
           iterations of this loop */
        int sum = 0 ;

        num = loop_count;

        while (num > 0)
        {
            digit = num % 10;
            sum = sum + (digit*digit*digit);
            num = num / 10 ;
        }
        
        if (sum == loop_count)
        {
            printf("\n the Armstrong number %d is %d", result_count,loop_count);
            result_count++;
        }
        

        loop_count = loop_count + 1;
        
        
    }

    printf("\n");
    return 0;
    
}