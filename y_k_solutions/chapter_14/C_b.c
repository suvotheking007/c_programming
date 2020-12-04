/*
Write a program to pick up the largest number from any 5 row by 5
column matrix.
*/

#include <stdio.h>
#define RANGE 5

void main()
{
    int arr[RANGE][RANGE], max;

    //----User inputs the value of array
    for(int i = 0; i < RANGE; i++)
    {
        for(int j = 0; j < RANGE; j++)
        {
            printf("\n Please enter the element of row %d and column %d :- ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    //----------------------------------


    //-------------Finding max number ------------

    max = arr[0][0];

    for(int i = 0; i < RANGE; i++)
    {
        for(int j = 0; j < RANGE; j++)
        {

            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    //--------------------------------------------

    printf("\n The maximum number is :- %d", max);
    printf("\n");
}