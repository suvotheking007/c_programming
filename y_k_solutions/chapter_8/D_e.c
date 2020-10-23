/*
A positive integer is entered through the keyboard. Write a function
to obtain the prime factors of this number.
For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime
factors of 35 are 5 and 7.
*/

#include <stdio.h>

void prime_factors( int );



void main()
{
    int a;
    printf("\n Please enter the number :- ");
    scanf("%d",&a);

    printf("\n The prime factors are :- ");
    prime_factors(a);
    printf("\n");
}



// A function to print all prime factors of a given number n 

void prime_factors(int n) 
{ 

    // Print the number of 2s that divide n 

    while (n % 2 == 0) 

    { 

        printf("%d ", 2); 

        n = n / 2; 

    } 

  

    // n must be odd at this point.  So we can skip  

    // one element (Note i = i +2) 

    for (int i = 3; i <= n; i = i+2) 

    { 

        // While i divides n, print i and divide n 

        while (n % i == 0) 

        { 

            printf("%d ", i); 

            n = n / i; 

        } 

    } 

  

    // This condition is to handle the case when n  

    // is a prime number greater than 2 

    if (n > 2) 
    {
        printf ("%d ", n); 
    }
        
} 