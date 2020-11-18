/*
Twenty-five numbers are entered from the keyboard into an array.
Write a program to find out how many of them are positive, how
many are negative, how many are even and how many odd.
*/

#include <stdio.h>
#define RANGE 25

void main()
{
    int arr[RANGE], pos = 0, neg = 0, odd = 0, even = 0;

    //---User inputs the array values ----
    for(int i = 0; i < RANGE; i++)
    {
        printf("\n Please enter the element %d :- ", i + 1);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    //------------------------------

    //----Outer for loop begins ---------
    for(int i = 0; i < RANGE; i++)
    {
        if(arr[i] < 0)
        {
            neg++;
        }
        if(arr[i] > 0)
        {
            pos++;
        }
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        if(arr[i] % 2 != 0)
        {
            odd++;
        }
    }
    //-----------------------------------

    //--------Output to user----------
    printf("\n The number of negative numbers are :- %d",neg);
    printf("\n The number of positive numbers are :- %d",pos);
    printf("\n The number of even numbers are :- %d",even);
    printf("\n The number of odd numbers are :- %d",odd);
    //--------------------------------
}