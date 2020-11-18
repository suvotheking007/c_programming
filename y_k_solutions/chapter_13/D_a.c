/*
Twenty-five numbers are entered from the keyboard into an array.
The number to be searched is entered through the keyboard by the
user. Write a program to find if the number to be searched is
present in the array and if it is present, display the number of times
it appears in the array.
*/

#include <stdio.h>

void main()
{
    int arr[25], a, b = 0;

    //Entering each elements of the  array -
    for(int i = 0; i < 25; i++)
    {
        printf("\n Please enter the element %d :- ", i);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    //------------------------------

    //Taking the number that has to be searched by the user in variable "a"
     printf("\n Please enter the number that has to be searched :-");
     scanf("%d", &a);
    //------------------------

    //Searching for the number and how many times it appeared in the array
    for (int i = 0; i < 25; i++)
    {
        if ( a == arr[i])
        {
            b++;
        }
        
    }
    
    //--------------------------------


    //Displaying results 
    if (b == 0)
    {
        printf("\n %d Has no repeatations", a );
    }
    else
    {
        printf("\n %d Has %d repeatations", a, b );
    }
    
    printf("\n");
    //--------------------------------
}