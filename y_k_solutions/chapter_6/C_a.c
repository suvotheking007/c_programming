/*
Write a program to print all prime numbers from 1 to 300. (Hint:
Use nested loops, break and continue)
*/

#include <stdio.h>

int main()
{   
    int num, res_count, count, i, prime;

    for (num = 1, res_count = 2; num <= 300; num++)
    {   
        //Since 1 is neither prime nor composite
        if (num == 1)
        {
            printf("\n 1 is neither prime nor composite");
            continue;
        }
        


        /*
        this initialization of the count variable is done 
        for optimizing the program
        */
        count = num/2;

        prime = 1;
        for (i = 2; i <= count; i++)
        {   
            if (num % i == 0)
            {
                prime = 0;
            }
                
        }
        if (prime)
        {
            printf("\n The number %d prime number is :- %d", res_count,num);
            res_count++;
        }
        
    }

    printf("\n");
    return 0;
}