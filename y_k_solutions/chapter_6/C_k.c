/*
Ramanujan number is the smallest number that can be expressed
as sum of two cubes in two different ways. Write a program to print
all such numbers up to a reasonable limit.
*/

#include <stdio.h>

int main()
{
    int i, a, b, x, y, k, count = 0;

    printf("\n Please enter the lower limit of range within which you want to find the Ramanujan number :- ");
    scanf("%d", &a);
    printf("\n Please enter the upper limit of range within which you want to find the Ramanujan number :- ");
    scanf("%d", &b);

    //Loop for choosing the each number in the numberline
    for (i = a; i <= b; i++)
    {   
        k = 0;

       //Loop for choosing x begins ------>
       for ( x = 1; x*x*x < i; x++)
       {
           
           //Loop for choosing y begins ---------->
           for ( y = x + 1; x*x*x + y*y*y <= i; y++)
           {
               if (x*x*x + y*y*y == i)
               {
                   k++;
                   x++;
               }
               
           }
           
       }
       if (k == 2)
        {   
            ++count;
            printf("\n The number %d ramanujan number is :- %d", count,i);
        } 
    }
    
    



    printf("\n");
    return 0;
    
}