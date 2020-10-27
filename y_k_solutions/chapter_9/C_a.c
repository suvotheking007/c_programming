/*
Write a function that receives 5 integers and returns the sum,
average and standard deviation of these numbers. Call this function
from main( ) and print the results in main( ).
*/

//The standard deviation part of the program is left for more knowledge in standard deviation

#include <stdio.h>
void func(int, int, int, int, int, int *, float *);

void main()
{
    int a, b, c, d, e, sum;
    float avg;

    printf("\n Please enter the first number :- ");
    scanf("%d", &a);
    printf("\n Please enter the second number :- ");
    scanf("%d", &b);
    printf("\n Please enter the third number :- ");
    scanf("%d", &c);
    printf("\n Please enter the fourth number :- ");
    scanf("%d", &d);
    printf("\n Please enter the fifth number :- ");
    scanf("%d", &e);

    func(a, b, c, d, e, &sum, &avg);

    printf("\n Your sum is %d", sum);
    printf("\n Your average is %.2f", avg);
    printf("\n");

}

void func(int a, int b, int c, int d, int e, int *s, float *avg)
{
    *s = a + b + c + d + e;
    *avg = (a + b + c + d + e)/5;
}