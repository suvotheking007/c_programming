/*
Write a program to find if a square matrix is symmetric.
*/

#include <stdio.h>
#define RANGE 3
int arr_t[RANGE][RANGE];

void transpose(int (*)[RANGE]);

void main()
{   
    int arr[RANGE][RANGE], check = 1;

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

    //Finding the transpose of the array ----
    transpose(arr);
    //---------------------------------------

    //----Check if the matrix is symetric or not -------------
    for(int i = 0; i < RANGE; i++)
    {
        if (check == 1)
        {
            for(int j = 0; j < RANGE; j++)
            {
                if (arr[i][j] != arr_t[i][j])
                {
                    check = 0;
                    break;
                }
                
            }
        }
        else
        {
            break;
        }
    }
    //----------------------------------

    //-----Outputting the result to the user
    if (check == 1)
    {
        printf("\n The entered matrix is a symetric matrix ");
    }
    else
    {
        printf("\n The entered matrix is not a symetric matrix ");
    }

    printf("\n");
    
    //--------------------------------------
}



//-----------------Function defination --------------------
void transpose(int (*arr)[RANGE])
{   
    int *p;

    for (int i = 0; i < RANGE; i++)
    {   
        p = arr + i;

        for (int j = 0; j < RANGE; j++)
        {
            arr_t[j][i] = *(p + j);
        }
        
    }
    
}
//--------------------------------------------------------------