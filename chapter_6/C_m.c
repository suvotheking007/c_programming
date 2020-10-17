
/*
Arranging a range of number in triangular form 
*/

#include <stdio.h>
int main()
{
    int a, b, r, m = 1, num ;

    printf("\n Please enter the lowest number that you want to print out :- ");
    scanf("%d", &a);
    printf("\n Please enter the highest number that you want to print out :- ");
    scanf("%d", &b);

    num = a;

    //-------------Program to find m value -------////

    while (1)
    {
        for (int i = 1; i <= m; i++)
        {
            //printf(" %d",a);
            a++;

            if (a > b)
            {
                break;
            }

        }
        //printf("\n");

        if (a > b)
        {
            break;
        }

        m++;
        
    }

    //----------------------------//////--------------///////
    ////////////////////////////////////////////////////////

    int l;

    for (int i = 1; i <= m; i++)
    {   
        l = m - i;

        //Loop for printing out the initial spaces
        for (int k = 1; k <= l; k++)
        {
            printf(" ");  
        }

        //Loop for printing the number
        for (int n = 1; n <= i && num <= b; n++)
        {
            printf("%d",num);
            printf(" ");
            num++;
        }
        printf("\n");  
    } 
}

/*
----------------------------------------------
--------Obsolate trials---------------
for (int i = m; i >= 0; i--)
    {
        
        for (int k = 1; k <= i ; k++)
        {
            if (k < i)
            {
                printf(" ");
            }
            else if (k == i)
            {
                printf("%d", num);
                num++;
                break;
            }
             
        }
        printf("\n");
        
        
    }

*/