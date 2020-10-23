/*
Write a general-purpose function to convert any given year into its
Roman equivalent. Use these Roman equivalents for decimal
numbers: 1 – I, 5 – V, 10 – X, 50 – L, 100 – C, 500 – D, 1000 – M.
Example:
Roman equivalent of 1988 is mdcccclxxxviii.
Roman equivalent of 1525 is mdxxv.
*/

#include <stdio.h>

void convert_roman( int );



void main()
{
    int num;

    printf("\n Please enter the year :- ");
    scanf("%d", &num);

    printf("\n Your roman number would be :- ");
    convert_roman(num);
    printf("\n");
}









void convert_roman(int a)
{   
    int i;
    
    if (a == 0)
    {
        printf("\n you entered a 0 ");
    }
    else
    {
      while(a != 0)
        {
            if (a >= 1000)
            {
                for (i = 1; i <= (a / 1000); i++)
                {
                    printf("M");
                }
                
                a = a % 1000 ;
            }
            else if (a < 1000 && a >= 500)
            {
                for (i = 1; i <= (a / 500); i++)
                {
                    printf("D");
                }
                
                a = a % 500;
            }
            else if (a < 500 && a >= 100)
            {
                for (i = 1; i <= (a / 100); i++)
                {
                    printf("C");
                }
                
                a = a % 100;
            }
            else if (a < 100 && a >= 50)
            {
                for (i = 1; i <= (a / 50); i++)
                {
                    printf("L");
                }
                
                a = a % 50;
            }
            else if (a < 50 && a >= 10)
            {
                for (i = 1; i <= (a / 10); i++)
                {
                    printf("X");
                }
                
                a = a % 10;
            }
            else if (a < 10 && a >= 5)
            {
                for (i = 1; i <= (a / 5); i++)
                {
                    printf("V");
                }
                
                a = a % 5;
            }
            else
            {
                for (i = 1; i <= a; i++)
                {
                    printf("I");
                }

                a = 0;
                break;
                
            }
        }  
    } 
}
