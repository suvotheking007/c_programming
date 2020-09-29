/*
If a five-digit number is input through the keyboard, write a
program to reverse the number.
*/

#include <stdio.h>

int main()
{
    int num,new_num, digit, rev_num = 0 ;

    //Taking the number from the user as input
    printf("\n Please enter a five digit number as your whish :- ");
    scanf("%d", &num);


    
    //Moving the 5th digit to first-----------------------------
    
    //taking out the 5th digit
    digit = num % 10;

    //Resulted number after taking out the 5th digit
    new_num = num / 10;

    //Resulted number after putting the 5th digit to first
    rev_num = rev_num + (digit * 10000);


    
    //Moving the 4th digit to second-----------------------------
    
    //taking out the 4th digit from the number obtained after taking out the 5th digit
    digit = new_num % 10;

    //Resulted number after taking out the 4th digit
    new_num = new_num / 10;

    //Resulted number after putting the 4th digit to second
    rev_num = rev_num + (digit * 1000);


    
    //Moving the 3rd digit to third-----------------------------
    
    //taking out the 3rd digit from the number obtained after taking out the 4th digit
    digit = new_num % 10;

    //Resulted number after taking out the 3rd digit
    new_num = new_num / 10;

    //Resulted number after putting the 3rd digit to third
    rev_num = rev_num + (digit * 100);


    
    //Moving the 2nd digit to fourth-----------------------------
    
    //taking out the 2nd digit from the number obtained after taking out the 3rd digit
    digit = new_num % 10;

    //Resulted number after taking out the 2nd digit
    new_num = new_num / 10;

    //Resulted number after putting the 2nd digit to fourth
    rev_num = rev_num + (digit * 10);


    
    /*
    Resulted number after adding the last digit to the 
    resulted number obtained arranging all the digits in 
    reversed order uptill the 2nd last digit of the 
    resulted number
    */

    //since there is only one digit in the remaining number, the "digit" variable will hold the number itself
    digit = new_num;
    rev_num = rev_num + digit;

    //Finally printing out the results------->>>>>>>>>>>>>
    printf("\n The reverse of the number %d is = %d \n", num, rev_num);

    return 0;
}