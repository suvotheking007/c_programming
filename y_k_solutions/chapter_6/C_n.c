/*
Write a program to produce the following output:
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A
*/

#include <stdio.h>

int main()
{
    char a = 'A', b = 'G', c = b, l = 0;
    

    for (int i = 0; i < 7; i++, l+=2)
    {   

        for (char j = a; j < b; j++)
        {
            printf("%c", j);
        }
        b--;
        
        if (i == 0)
        {
            printf("%c", c);
        }
        
        for (int m = 1; i && m <= l; m++)
        {
            printf(" ");
        }
        

        for (char k = c-1; k >= a; k--)
        {
            printf("%c", k);
        }
        c--;
        printf("\n");
        
    }
    

    return 0;
    
}