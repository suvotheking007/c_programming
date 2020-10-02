/*
While purchasing certain items, a discount of 10% is
offered if the quantity purchased is more than 1000. If quantity and
price per item are input through the keyboard, write a program to
calculate the total expenses.
*/

#include <stdio.h>

int main()
{
    int dis = 0, qty;
    float rate, tot;

    printf("\n Enter the quantity :- ");
    scanf("%d", &qty);
    printf("\n Enter the rate :- ");
    scanf("%f", &rate);

    if (qty > 1000)
    {
        dis = 10;
    }

    tot = qty * rate - qty * rate * dis / 100;

    printf("\n Your total would be :- %f \n", tot);
    
}