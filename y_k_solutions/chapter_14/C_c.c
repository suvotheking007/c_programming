/*
Write a program to obtain transpose of a 4 x 4 matrix. The
transpose of a matrix is obtained by exchanging the elements of
each row with the elements of the corresponding column.
*/

#include <stdio.h>
#define RANGE 4

void main()
{   
    int arr[RANGE][RANGE], temp;

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

    //-----Obtaining the transpose of the matrix -------
    for(int i = 0; i < RANGE ; i++)
    {
        for(int j = i + 1; j < RANGE; j++)
        {
            temp = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = temp;
        }
    }
    //--------------------------------------------------

    //Printing out the array --------------------
    for (int i = 0; i < RANGE; i++)
    {
        for (int j = 0; j < RANGE; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        
        printf("\n");
        
    }
    
    //-------------------------------------------
}