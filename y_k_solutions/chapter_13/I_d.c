/*
Write a program which performs the following tasks:
1. Initialize an integer array of 10 elements in main( )
2. Pass the entire array to a function modify( )
3. In modify( ) multiply each element of array by 3
4. Return the control to main( ) and print the new array elements
in main( )
*/

#include <stdio.h>
#define RANGE 10

void modify(int *);

void main()
{
    int arr[RANGE];

    //---User inputs value to the array-------
    for(int i = 0; i < RANGE; i++)
    {
        printf("\n Please enter the value of element %d :-", i + 1);
        scanf("%d", &arr[i]);
    }
    //----------------------------------------

    modify(arr);

    //Printing out the array elements--------
    for(int j = 0; j < RANGE; j++)
    {
        printf("\n the element number %d :- %d", j + 1, arr[j]);
    }
    printf("\n");
    //-----------------------------------------------

}

void modify(int *arr)
{
    for(int i = 0; i < RANGE; i++)
    {
        *arr = *arr * 3;
        arr++;
    }
}
