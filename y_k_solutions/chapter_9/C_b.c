/*
Write a function that receives marks received by a student in 3
subjects and returns the average and percentage of these marks.
Call this function from main( ) and print the results in main( ).
*/

#include <stdio.h>

void calc(float, float, float, float *, float *);

int main()
{
    float a, b, c;
    float avg, per;
    char opt = 'y';

    while(1)
    {
        
        if( opt == 'y' || opt == 'Y')
        {

            printf("\n please enter the first number :- ");
            scanf("%f", &a);
            printf("\n please enter the second number :- ");
            scanf("%f", &b);
            printf("\n please enter the third number :- ");
            scanf("%f", &c);

            calc(a, b, c, &avg, &per);

            printf("\n the average is :- %.2f", avg);
            printf("\n The percentage is :- %.2f", per);
            printf("\n");
        }
        else
        {
            printf("\n You entered a wrong option !!!");
        
        }

        printf("\n Do you like to continue ?");
        printf("\n enter \'y\' for yes and \'n\' for no :- ");
        scanf(" %c", &opt);

        if (opt == 'n' || opt == 'N')
        {
            break;
        }
        

    }

    printf("\n----Thank you for using me ----------");
    printf("\n");
}


void calc(float a, float b, float c,   float *avg, float *per)
{
    *avg = (a + b + c)/3;
    *per = (a + b + c)/300.00*100.00;
}