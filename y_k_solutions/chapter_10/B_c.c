/*
Write a recursive function to obtain the first 25 numbers of a
Fibonacci sequence. In a Fibonacci sequence the sum of two
successive terms gives the third term. Following are the first few
terms of the Fibonacci sequence:
1 1 2 3 5 8 13 21 34 55 89...
*/

#include <stdio.h>

void fibonacci(int);

void main()
{   
    int a;

    printf("\n please enter the first number :- ");
    scanf("%d", &a);

    fibonacci(a);

}

//Fibonacci function defination---------------------
int i = 1;
int b = 0;
void fibonacci(int a)
{   
    int c;
    
    while (i <= 25)
    {   
        c = a + b;

        printf("%d ", c);
        b = a;
        a = c;
        i++;

        fibonacci(a);
    }
    
    
}
//fibonacci function defination ends---------------------------