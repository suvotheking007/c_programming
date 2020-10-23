/*
Using conditional operators determine:
    (1) Whether the character entered through the keyboard is a 
        lower case alphabet or not.
    (2) Whether a character entered through the keyboard is a special 
        symbol or not.
*/
#include <stdio.h>

int main()
{
    char c;

    printf("\n please enter a character :- ");
    scanf("%c", &c);

    ( c >= 97 && c <= 122 ) ? printf("\n The entered character is a lower case alphabet") : ( ( ( c >= 0 && c <= 47 ) || ( c >= 58 && c <= 64 ) || ( c >= 91 && c <= 96 ) || ( c >= 123 && c <= 127 ) ) ? printf( "\n The entered character is a special symbol" ) : printf("\n No such characters in database !"));

    printf("\n");

    return 0;

}
