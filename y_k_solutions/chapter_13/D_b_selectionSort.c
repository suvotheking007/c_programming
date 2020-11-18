/*
Implement the Selection Sort
algorithm on a set of 25 numbers. (arranging the numbers in ascending order)
*/

#include <stdio.h>
#define RANGE 25

void main()
{
    int arr[RANGE], min, temp;

    //Entering each elements of the  array -
    for(int i = 0; i < RANGE; i++)
    {
        printf("\n Please enter the element %d :- ", i + 1);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    //------------------------------


    //---Implementation of selection sort--------------
    for (int i = 0; i < RANGE - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < RANGE ; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            
        }

        //Value swaping -----------------
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        //---------------------------------
        
    }
    //-----------------------------------------------------


    //-----Printing out the array--------------------------
    for (int k = 0; k < RANGE; k++)
    {
        printf("\n %d", arr[k]);
    }
    //-----------------------------------------------------

    
    //------------------------------------------------
    printf("\n");
    //------------------------------------------------
}