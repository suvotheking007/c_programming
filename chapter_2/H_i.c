/*
Consider a currency system in which there are notes of seven
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If
a sum of Rs. N is entered through the keyboard, write a program to
compute the smallest number of notes that will combine to give Rs.
N.
*/

#include <stdio.h>

int main()
{
    int N,n;

    //Taking input from the user
    printf("\n Please enter the amount :- ");
    scanf("%d", &N);

    //Checking for rupees 100
    n = N / 100;
    N = N % 100;
    printf("\n The number of 100 rupees is :- %d", n);

    //Checking for rupees 50
    n = N / 50;
    N = N % 50;
    printf("\n The number of 50 rupees is :- %d", n);

    //Checking for rupees 10
    n = N / 10;
    N = N % 10;
    printf("\n The number of 10 rupees is :- %d", n);

    //Checking for rupees 5
    n = N / 5;
    N = N % 5;
    printf("\n The number of 5 rupees is :- %d", n);

    //Checking for rupees 2
    n = N / 2;
    N = N % 2;
    printf("\n The number of 2 rupees is :- %d", n);

    //Checking for rupees 1
    n = N / 1;
    printf("\n The number of 100 rupees is :- %d \n", n);

    return 0;
}