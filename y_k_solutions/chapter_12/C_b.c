/*
Write down macro definitions for the following:
1. To test whether a character is a small case letter or not.
2. To test whether a character is a upper case letter or not.
3. To test whether a character is an alphabet or not. Make use of
the macros you defined in 1 and 2 above.
4. To obtain the bigger of two numbers.
*/

#include <stdio.h>
#define IS_UPPER(x) (x >= 'A' && x <= 'Z')
#define IS_LOWER(x) (x >= 'a' && x <= 'z')
#define IS_BIGGER(a, b) (a > b)

void main()
{
    char x;
    int a, b;

    printf("\n Please enter a character :- ");
    scanf(" %c",&x);
    
    if IS_UPPER(x)
    {
        printf("\n The entered character is an uppercase alphabet !");
    }
    else if IS_LOWER(x)
    {
        printf("\n The entered character is a lowercase alphabet !");
    }
    else
    {
        printf("\n The entered character is not an alphabet !");
    }

    printf("\n Please enter the value of \'a\' :- ");
    scanf("%d",&a);
    printf("\n Please enter the value of \'b\' :- ");
    scanf("%d",&b);

    if IS_BIGGER(a, b)
    {
        printf("\n \'a\' is bigger than \'b\'");
    }
    else 
    {
        printf("\n \'b\' is bigger than \'a\'");
    }

    printf("\n");
}