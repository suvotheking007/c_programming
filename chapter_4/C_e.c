/*
A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine whether 
the original and reversed numbers are equal or not.
*/

#include <stdio.h>
int main()
{
    int user_num, num, rev_num = 0;

    printf("\n Please enter a five digit number :- ");
    scanf("%d", &user_num);

    //reversing the number :-
    num = user_num;
    rev_num = rev_num + 10000 * (num % 10);

    num = num / 10 ;
    rev_num = rev_num + 1000 * (num % 10);

    num = num / 10 ;
    rev_num = rev_num + 100 * (num % 10);

    num = num / 10 ;
    rev_num = rev_num + 10 * (num % 10);

    num = num / 10 ;
    rev_num = rev_num + 1 * (num % 10);

    //condition started
    if (user_num == rev_num)
    {
        printf("\n The Entered number and reversed number are equal");
    }
    else
    {
        printf("\n The Entered number and reversed number are not equal");
    }

    printf(" \n The reversed number of the entered number is %d ", rev_num);
    
    printf("\n");
    

    return 0;

}