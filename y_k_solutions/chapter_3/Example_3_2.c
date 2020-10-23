/*
The current year and the year in which the employee 
joined the organization are entered through the keyboard. If the 
number of years for which the employee has served the organization is 
greater than 3, then a bonus of Rs. 2500/- is given to the employee. If 
the years of service are not greater than 3, then the program should do 
nothing.
*/

#include <stdio.h>

int main()
{
    int join_year, present_year;

    printf("\n Please enter the present year :- ");
    scanf("%d", &present_year);
    printf("\n Please enter the joining year of the respective employee :- ");
    scanf("%d", &join_year);

    if ((present_year - join_year) > 3)
    {
        printf("\n Give a bonus of rs2500 to the employee \n ");
    }

    return 0;
    

}