/*
If an array arr contains n elements, then write a program to check if
arr[ 0 ] = arr[ n-1 ], arr[ 1 ] = arr[ n - 2 ] and so on.
*/

#include <stdio.h>
#define N 11

void main()
{   
    int arr[N], range;

    //----User inputs the array value ---
    for(int i = 0; i < N; i++)
    {
        printf("\n Please enter the element %d :- ", i+1);
        scanf("%d",&arr[i]);
    }
    //-----------------------------------

    //Check for the range wether it is odd or even----
    if(N % 2 == 0)
    {   
        //when the range is even
        range = N / 2;
    }
    else
    {   
        //when the range is odd
        range = (N + 1) / 2;
    }
    //------------------------------------------------

    //--Implementation of the above stated algorithm--------
    for(int i = 0; i < range; i++)
    {
        if(arr[i] == arr[N - (i + 1)] && i != N - (i + 1))
        {
            printf("\n the element number %d and %d are equal",i, N - (i + 1));
        }
    }
    //------------------------------------------------------
}