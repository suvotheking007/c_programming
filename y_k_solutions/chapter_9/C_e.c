/*
If the lengths of the sides of a triangle are denoted by a, b, and c,
then area of triangle is given by
area = sqrt(S ( S - a )( S - b )( S - c ))
where, S = ( a + b + c ) / 2. Write a function to calculate the area of
the triangle.
*/

#include <stdio.h>
#include <math.h>

float semi_perimeter( float, float, float);
void area( float, float, float, float, double*);
void program_switch(char *);

void main()
{
    float a, b, c, s;
    double result;
    char opt = 'y';

    while (1)
    {
        if (opt == 'y' || opt == 'Y')
        {
            printf("\n Please enter the first side :- ");
            scanf("%f", &a);
            printf("\n Please enter the second side :- ");
            scanf("%f", &b);
            printf("\n Please enter the third side :- ");
            scanf("%f", &c);

            s = semi_perimeter( a, b, c);

            area( a, b, c, s, &result);

            printf("\n Semi perimeter = %f \n area = %.4lf \n ------", s, result);
        }
        else if (opt == 'n' || opt == 'Y')
        {
            printf("\n --Thank you--");
            printf("\n----");
            break;
        }
        
        else
        {
            printf("\n You entered a wrong option");
        }

        //Switch to exit out of the program

        program_switch(&opt);
    }
}

float semi_perimeter( float a, float b, float c )
{
    float s;

    s = ( a + b + c ) / 2;

    return(s);
}

void area( float a, float b, float c, float s, double *result)
{
    *result = sqrt(s * ( s - a )*( s - b )*( s - c ));
}

void program_switch(char *opt)
{
    printf("\n Do you want to do it again ? ");
    printf("\n \'y\' to continue, \'n\' to exit out :- ");
    scanf(" %c", &(*opt));
}