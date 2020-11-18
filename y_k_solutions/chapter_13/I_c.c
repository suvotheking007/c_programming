/*
Write a program using pointers to find the smallest number in an
array of 25 integers.
*/
#include <stdio.h>
#define RANGE 5

//Function declarations----
int find_min(int *);
//----



void main()
{
    int arr[RANGE], min;

    //---User inputs value to the array-------
    for(int i = 0; i < RANGE; i++)
    {
        printf("\n Please enter the value of element %d :-", i + 1);
        scanf("%d", &arr[i]);
    }
    //----------------------------------------

    min = find_min(arr);

    //Value given back to user----------
    printf("\n The minimum value entered is :- %d",min);
    printf("\n");
    //----------------------------------
}



//Function definations----
int find_min(int *arr)
{
    int min, *check;

    for(int i = 0; i < RANGE - 1; i++)
    {
        min = *arr;
        check = arr + 1;

        for (int j = i + 1; j <= RANGE; j++)
        {
            if (*check < *arr)
            {
                min = *check;
            }

            check++;
            
        }

        arr++;
    }

    return min;

}
//------------------------