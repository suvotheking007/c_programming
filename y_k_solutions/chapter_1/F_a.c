/*
Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary.
*/


# include <stdio.h>

int main()
{
    float basic, gross, d_allowance, rent_allowance;

    /* Taking Ramesh salary as input from keyboard*/
    printf("Please enter Ramesh's basic salary :- ");
    scanf("%f", &basic);

    /*Calculating dearness allowance and rent_allowance*/
    d_allowance = (basic * 40)/100;
    rent_allowance = (basic * 20)/100;

    /*calculating gross salary*/
    gross = d_allowance + rent_allowance + basic;

    /*Printing the gross salary to user screen*/
    printf("The gross salary of Ramesh is %f \n",gross);

    printf("changes made to demonstrate the pull request")

    return 0;
}
