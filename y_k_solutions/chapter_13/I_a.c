/*
Write a program to copy the contents of one array into another in
the reverse order.
*/

#include <stdio.h>
#define RANGE 7

void main()
{   
    int arr[RANGE], arr_2[RANGE];

    //User inputs array values
    for(int i = 0; i < RANGE; i++)
    {   
        //Reverse storage of elements
        int j = -1 * (i - (RANGE - 1));

        printf("\n Please enter the value of element %d :- ", i + 1 );
        scanf("%d", &arr[i]);

        //Storing the elements in reverse array
        arr_2[j] = arr[i];
    }
    //------------------------

    //Printing out the reverse array elements--------
    for(int j = 0; j < RANGE; j++)
    {
        printf("\n the element number %d :- %d", j + 1, arr_2[j]);
    }
    //-----------------------------------------------

}