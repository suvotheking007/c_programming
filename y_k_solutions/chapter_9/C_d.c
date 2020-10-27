/*
Given three variables x, y, z write a function to circularly shift their
values to right. In other words if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
circularly shift values.
*/

#include <stdio.h>

void circular_shift(int , int, int, int*, int*, int* );

int main()
{
    int a, b, c;
    char opt = 'y';

    while(opt == 'y' || opt == 'Y' || opt != 'n' || opt != 'N' )
    {
        if(opt == 'y' || opt == 'Y')
        {
            printf("\n Enter the value of a :-");
            scanf("%d", &a);
            printf("\n Enter the value of b :-");
            scanf("%d", &b);
            printf("\n Enter the value of c :-");
            scanf("%d", &c);

            printf("\n------------------");
            printf("\n Values before shift");
            printf("\n a = %d, b = %d, c = %d", a, b, c);
            printf("\n------------------");
            printf("\n------------------");

            circular_shift(a, b, c, &a, &b, &c);

            printf("\n Values after shift");
            printf("\n a = %d, b = %d, c = %d", a, b, c);
            printf("\n------------------");
        }
        else
        {
            printf("\n You entered a wrong option--");
        }

        //switch to exit out of the program
        printf("\n Do you want to do it again ? ");
        printf("\n \'y\' to continue, \'n\' to exit out :- ");
        scanf(" %c", &opt);
    }
}

void circular_shift(int a, int b, int c, int *j, int *k, int *l)
{
    *j = c;
    *k = a;
    *l = b;
}