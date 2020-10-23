/*
In boxing the weight class of a boxer is decided as per the following 
table. Write a program that receives weight as input and prints out 
the boxer’s weight class.

Boxer class         Weight in pounds
Flyweight           <115
Bantamweight        115 - 121
Featherweight       122 - 153
Middleweight        154 - 189
Heavyweight         >= 190
*/

#include <stdio.h>

int main()
{
    float weight;
    printf("\n Please enter the weight of the boxer in pounds :- ");
    scanf("%f", &weight);

    if (weight < 115)
    {
        printf("\n It's a flyweight boxer");
    }
    else if (weight >= 115 && weight <= 121)
    {
        printf("\n It's a Bantamweight boxer");
    }
    else if (weight >= 122 && weight <= 153)
    {
        printf("\n It's a Featherweight boxer");
    }
    else if (weight >= 154 && weight <= 189)
    {
        printf("\n It's a Middleweight boxer");
    }
    else
    {
        printf("\n It's a Heavyweight boxer");
    }

    printf("\n");
    return 0;
}