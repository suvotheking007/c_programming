/*
If cost price and selling price of an item are input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit he 
made or loss he incurred.
*/

#include <stdio.h>
int main()
{
    float cp, sp, r;

    //entering value by the user
    printf("\n please enter the cost price of the item :- ");
    scanf("%f", &cp);
    printf("\n please enter the selling price of the item :- ");
    scanf("%f", &sp);

    //condition started
    if (cp < sp)
    {
        r = sp - cp;
        printf("\n You encountered a profit of ");
    }
    else
    {
        r = cp - sp ;
        printf("\n You encountered a loss of ");
    }

    //outputting the result to the user
    printf(" %.2f rupees \n", r);

    return 0;
    

}