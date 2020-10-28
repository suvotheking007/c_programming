/*
A positive integer is entered through the keyboard, write a program
to obtain the prime factors of the number. Modify the function
suitably to obtain the prime factors recursively.
*/

#include <stdio.h>

void non_rec(int);
void rec(int);

void main()
{
    int a;

    printf("\n Please enter a number whose prime factor you want :- ");
    scanf("%d", &a);

    printf("\n ----Value obtained from the non recursive function-->");
    non_rec(a);
    printf("\n");

    printf("\n ----Value obtained from the recursive function-->");
    rec(a);

}

void non_rec(int a)
{   
    int c, d;
    while(a > 0)
    {
        for(int i = 2; i <= a; i++)
        {
            if (a % i == 0)
            {
                printf("\t %d", i);
                c = i;
                break;
            }
        }
        a /= c;
    }

}

void rec(int a)
{
    int c;

    for (int i = 2; i <= a; i++)
    {
        if ( a % i == 0 )
        {
            c = i;
            printf("%d \t ", c);
            rec( a / i);
            break;
        }
    }
}