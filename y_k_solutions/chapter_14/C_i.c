/*
Write a program to add two 6 x 6 matrices.
*/

#include <stdio.h>
#define RANGE 3

void main()
{
    int arr_1[RANGE][RANGE], arr_2[RANGE][RANGE], arr_add[RANGE][RANGE];

    //----User inputs the value of array 1
    printf("\n Enter the elements of array 1-------->>>>>>");
    for(int i = 0; i < RANGE; i++)
    {
        for(int j = 0; j < RANGE; j++)
        {
            printf("\n Please enter the element of row %d and column %d :- ", i, j);
            scanf("%d", &arr_1[i][j]);
        }
    }
    printf("\n \n -------------");
    //----------------------------------

    //----User inputs the value of array 2
    printf("\n Enter the elements of array 2-------->>>>>>");
    for(int i = 0; i < RANGE; i++)
    {
        for(int j = 0; j < RANGE; j++)
        {
            printf("\n Please enter the element of row %d and column %d :- ", i, j);
            scanf("%d", &arr_2[i][j]);
        }
    }
    printf("\n \n ");
    //----------------------------------

    //----Addition of the array elements
    for(int i = 0; i < RANGE; i++)
    {
        for(int j = 0; j < RANGE; j++)
        {
            arr_add[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }
    //----------------------------------

    //----Outputting the value of array to the user----
    for(int i = 0; i < RANGE; i++)
    {
        for(int j = 0; j < RANGE; j++)
        {
            printf(" %d \t", arr_add[i][j]);
        }
        printf("\n");
    }
    //----------------------------------

}