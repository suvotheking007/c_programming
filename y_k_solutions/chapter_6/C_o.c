/*
Write a program to produce the following output:
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
 
*/

/*
this progrm is incomplete and should be done after finishing the
chapter of "Reccursion"
*/  

#include <stdio.h>
int main()
{
    for (int i = 1, j = 1; i <= 5; i++)
    {   
        int m = 5 - i;

        for (int k = 1; k <= m; k++)
        {
            printf(" ");
        }
        

        for (int l = 1; l <= i; l++)
        {
            printf("%d", i);
            printf(" ");
        }
        printf("\n");
        

        
    }
    
}