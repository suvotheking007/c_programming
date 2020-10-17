/*
Write a program to generate all Pythogorean Triplets with side
length less than or equal to 30.
*/

#include <stdio.h>
int main()
{
    for (int p = 1; p <= 30; p++)
    {
        for (int b = 1; b <= 30; b++)
        {
            for (int h = 1; h <= 30; h++)
            {
                if (p*p + b*b == h*h)
                {
                    printf("\n perpendicular :- %d, base :- %d, hypotenuse :- %d", p, b, h);
                }
                
            }
            
        }
        
    }
    printf("\n");
    return 0;
    
}