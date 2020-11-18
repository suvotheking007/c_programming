/*
Implement the Insertion Sort
algorithm on a set of 25 numbers. (arranging the  umbers in ascending order)
*/
#include <stdio.h>
#define RANGE 25

void main()
{
    int temp, arr[RANGE];

    //---User inputs the array values ----
    for(int i = 0; i < RANGE; i++)
    {
        printf("\n Please enter the element %d :- ", i + 1);
        scanf("%d", &arr[i]);
    }
    //------------------------------

    //-------Implementation of Insertion sort to arrange the numbers in ascending order--
        //Outer for loop begins -------
        for(int i = 1; i < RANGE; i++)
        {   
            temp = arr[i];
            int j = i - 1;

            //Inner while loop begins ----
            while (j >= 0 && arr[j] > temp)
            {
                arr[j+1] = arr[j];
                j--;
            }
            //--------------------------

            arr[j + 1] = temp;
        }
        //-----------------------------
    //--------------------------------------------------

    //-----Printing out the array--------------------------
    for (int k = 0; k < RANGE; k++)
    {
        printf("\n %d", arr[k]);
    }
    //-----------------------------------------------------
}