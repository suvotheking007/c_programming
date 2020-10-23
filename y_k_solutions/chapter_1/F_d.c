/*
Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees.
*/

#include <stdio.h>

int main()
{
    float Tmp_fahr, Tmp_cel;

    printf("\n Enter the temperature (in fahrenheit scale) :- ");
    scanf("%f", &Tmp_fahr);


    //conversion to celsius
    Tmp_cel = (Tmp_fahr - 32)*5/9;
    printf("\n %f degree fahrenheit is equal to %f celsius ", Tmp_fahr, Tmp_cel);
    printf("\n");

    return 0;
}