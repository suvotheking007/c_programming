/*
Implement the Bubble Sort
algorithm on a set of 25 numbers. (arranging the  umbers in ascending order)
*/
#include <stdio.h>
#define RANGE 7

void main()
{   
    int temp, arr[RANGE], min;

    //Entering each elements of the  array -
    for(int i = 0; i < RANGE; i++)
    {
        printf("\n Please enter the element %d :- ", i + 1);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    //------------------------------

    //-------------IMplementation of bubble sort---------------
    for(int i = 0; i < RANGE - 1; i++)
    {
        for (int j = 0; j < RANGE - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {   
                //-----Value swap-----------
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                //----------------------
            }
            
        }
        
    }
    //------------------------------------------------------------

    //-----Printing out the array--------------------------
    for (int k = 0; k < RANGE; k++)
    {
        printf("\n %d", arr[k]);
    }
    //-----------------------------------------------------

}
