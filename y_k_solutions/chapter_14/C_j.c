/*
Write a program to multiply any two 3 x 3 matrices.
*/

#include <stdio.h>
#define RANGE 3

void main()
{
    int arr_1[RANGE][RANGE], arr_2[RANGE][RANGE], arr_multi[RANGE][RANGE];

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

    //-----Multiplication of the two array elements
    for(int i = 0; i < RANGE ; i++)
    {   

        for(int j = 0; j <= RANGE; j++)
        {   
            arr_multi[i][j] = 0;

            for (int k = 0; k < RANGE; k++)
            {
                arr_multi[i][j] += arr_1[i][k] * arr_2[k][j];
            }
            
        }
    }
    //---------------------------------------------

     //----Outputting the value of array to the user----
    for(int i = 0; i < RANGE; i++)
    {
        for(int j = 0; j < RANGE; j++)
        {
            printf("%d \t", arr_multi[i][j]);
        }
        printf("\n");
    }
    //----------------------------------
}