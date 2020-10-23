/*
If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits. (Hint: Use the modulus
operator ‘%’)
*/
#include <stdio.h>

int main()
{
    int num, sum = 0, new_num;
    
    //enter a number from the user
    printf("Please enter the five digit number \n whose sum of the digits you want to calculate :-");
    scanf("%d", &num);

    //add the last digit of the entered number to sum
    sum = sum + (num % 10); 

    //removes the last digit from the entered number and transfers the modified value to the variable "new_num"
    new_num = num / 10;

    //add the last digit of the number to sum
    sum = sum + (new_num % 10); 

    //removes the last digit from the entered number and transfers the modified value to the variable "new_num"
    new_num = new_num / 10;

    //add the last digit of the entered number to sum
    sum = sum + (new_num % 10); 

    //removes the last digit from the entered number and transfers the modified value to the variable "new_num"
    new_num = new_num / 10;

    //add the last digit of the entered number to sum
    sum = sum + (new_num % 10); 

    //removes the last digit from the entered number and transfers the modified value to the variable "new_num"
    new_num = new_num / 10; 

    //add the last digit of the entered number to sum
    sum = sum + (new_num % 10); 

    //removes the last digit from the entered number and transfers the modified value to the variable "new_num"
    new_num = new_num / 10; 

    
    //printing out the answer on the screen
    printf("\n Sum of the digits of the number %d is = %d \n", num, sum);

    return 0;
}