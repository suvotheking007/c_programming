/*
A 5-digit positive integer is entered through the keyboard, write a
recursive and a non-recursive function to calculate sum of digits of
the 5-digit number.
*/

#include <stdio.h>

void non_rec(int, int*);
void rec(int, int*);

void main()
{
    int a, sum = 0;

    printf("\n Please enter the value of a :- ");
    scanf("%d", &a);

    non_rec(a, &sum);
    printf("Value obtained from non recursive function :- %d", sum);
    printf("\n");

    rec(a, &sum);
    printf("Value obtained from recursive function :- %d", sum);
    printf("\n");
}


void non_rec(int a, int *sum)
{
    while(a != 0)
    {
        *sum += (a%10);
        a /= 10;
    } 
}

void rec(int a, int *sum)
{
    if (a < 0)
    {
        *sum += (a%10);
        a /= 10;

        rec(a, *(&sum));
        
    }
}