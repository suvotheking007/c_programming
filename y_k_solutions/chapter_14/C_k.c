/*
Given an array p[ 5 ], write a function to shift it circularly left by two
positions. Thus, if p[ 0 ] = 15, p[ 1 ]= 30, p[ 2 ] = 28, p[ 3 ]= 19 and p[
4 ] = 61 then after the shift p[ 0 ] = 28, p[ 1 ] = 19, p[ 2 ] = 61, p[ 3 ] =
15 and p[ 4 ] = 30. Call this function for a (4 x 5 ) matrix and get its
rows left shifted.
*/

#include <stdio.h>

void circularShift (int *, int, int);

void main()
{   
    int row, col;

    //-------User inputs array details -----------
    printf("\n Please enter the number of rows :- ");
    scanf("%d", &row);
    printf("\n Please enter the number of columns :- ");
    scanf("%d", &col);
    //--------------------------------------------

    int arr[row][col];

    //----User inputs the value of array
    printf("\n Enter the elements of array-------->>>>>>");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("\n Please enter the element of row %d and column %d :- ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n \n -------------");
    //----------------------------------

    circularShift(arr, row, col);

    //Printining the array elements after circular shift-----
    printf("\n The elements array :-");
    printf("\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("\t %d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n \n -------------");
    //-----------------------------------------------------
}

void circularShift(int *base, int row, int col)
{   
    int *arr;
    
    for (int i = 0; i < row; i++)
    {   
        arr = base;

        int fir = *arr, sec = *(arr + 1);

        for (int j = 0; j < col - 2; j++)
        {
            *(arr + j) = *(arr + j + 2);
        }

        *(arr + (col - 2)) = fir;
        *(arr + (col - 1)) = sec;
        
        base = base + col;
    }
    
    
}