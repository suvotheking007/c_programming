/*
Write a program to print the multiplication table of the number
entered by the user. The table should get displayed in the
following form:
29 * 1 = 29
29 * 2 = 58
*/

#include <stdio.h>
int main()
{
    int num,lim;

    printf("\n Please enter the number whose multiplication table you want to print out :- ");
    scanf("%d", &num);
    printf("\n Print the multiplication table upto? :- ");
    scanf("%d", &lim);

    for (int i = 1; i <= lim; i++)
    {
        printf("\n %d * %d = %d",num,i,(num * i));
    }

    printf("\n");
    return 0;
    
}