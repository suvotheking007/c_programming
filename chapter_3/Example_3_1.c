/*
While purchasing certain items, a discount of 10% is
offered if the quantity purchased is more than 1000. If quantity and
price per item are input through the keyboard, write a program to
calculate the total expenses.
*/

//-----There is another version of this code (that version of code is same as the book)-------------
//--------------Example_3_1_v2.c---------------
#include <stdio.h>

int main()
{
    int qty;
    float rate,tot = 0.0;

    printf("\n Please enter the quantity of the items :- ");
    scanf("%d", &qty);
    printf("\n Now please enter the price per item :- ");
    scanf("%f" , &rate);

    tot = qty * rate;

    if (qty>1000)
    {
        /* Execute these statements if the above condition is true */
        tot = tot - tot*10/100;

    }
    
    printf("\n You have to pay %f rupees \n ", tot);
}