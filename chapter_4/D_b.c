/*
Any character is entered through the keyboard, write a program to 
determine whether the character entered is a capital letter, a small 
case letter, a digit or a special symbol.

Table for ascii value range of characters -->

Characters          Value range
    A - Z              65 - 90
    a - z              97 - 122
    0 - 9              48 - 57
special symbols      0 - 47, 58 - 64, 91 - 96, 123 - 127    
*/

#include <stdio.h>
int main()
{
    char character;

    printf("\n Please enter the character :- ");
    scanf("%c", &character);

    if (character >= 48 && character <= 57)
    {
        printf("\n You entered a one digit number !");
    }
    else if (character >= 65 && character <= 90 )
    {
        printf("\n The entered character is a capital english letter !");
    }
    else if (character >= 97 && character <= 122)
    {
        printf("\n You entered an english small letter !");
    }
    else if ( character >= 0 && character <= 47 || character >= 58 && character <= 64 || character >= 91 && character <= 96 || character >= 123 && character <= 127)
    {
        printf("\n You entered a special symbol ");
    }
    
    printf("\n");
    
    return 0;
}