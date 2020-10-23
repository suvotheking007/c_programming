/*
Write a program to print 24 hours of day with suitable suffixes like
AM, PM, Noon and Midnight.
*/

#include <stdio.h>
int main()

{
    for (int i = 1; i <= 24; i++)
    {
        if (i < 12)
        {
            printf("\n It is %d:00 am",i);
        }
        else if (i == 12)
        {
            printf("\n It is noon right now");
        }
        else if (i > 12 && i != 24)
        {
            printf("\n It is %d:00 pm", i - 12);
        }
        else if (i == 24)
        {
            printf("\n It is midnight");
        }
    }

    printf("\n");
    return 0;
    
}