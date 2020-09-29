/*
Two numbers are input through the keyboard into two locations C
and D. Write a program to interchange the contents of C and D
*/

#include <stdio.h>
int main()
{
    int C, D;

    //Taking input from the user
    printf("\n Enter the number for the location \"C\" :- ");
    scanf("%d", &C);
    printf("\n Enter the number for the location \"D\" :- ");
    scanf("%d", &D);

    //interchanging the numbers 
    C = (C * 10) + D;
    D = (C/10);
    C = (C%10);

    printf("\n Values present in C and D is %d and %d \n", C, D);
    return 0;

}