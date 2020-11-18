#include <stdio.h>
#define RANGE 100

void main()
{
    int arr[RANGE];

    //---User inputs the array values ----
    for(int i = 0; i < RANGE; i++)
    {
        arr[i] = i + 1;
    }
    //------------------------------

    //--Implementation of sieve of eratosthenes----------------
        //Outer for loop begins-----
        for(int i = 1; i < RANGE; i++)
        {
            //inner for loop begins-------------
            for(int j = i + 1; j < RANGE && arr[i] != 0; j++)
            {
                if((arr[j] % arr[i] == 0) && (arr[j] != 0))
                {
                    arr[j] = 0;
                }
            }
            //----------------------------------
            
        }
        //--------------------------
    //---------------------------------------------------------

    //-----Printing out the array--------------------------
    for (int k = 0; k < RANGE; k++)
    {
        printf("\n %d", arr[k]);
    }
    //-----------------------------------------------------
}