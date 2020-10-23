/*
Write a program to enter numbers till the user wants. At the end it 
should display the count of positive, negative and zeros entered.
*/
/*
variable details :-
num -> number entered by the user
pos -> number of positive numbers
neg -> number of negative numbers
opt -> option choosed by the user
*/

#include <stdio.h>

int main()
{
    int num, pos = 0 , neg = 0 , zer = 0;
    char opt = 'y';

    while (opt == 'y')
    {
        printf("\n Please enter the number :- ");
        scanf("%d", &num);

        if (num > 0)
        {
            pos++;
        }
        else if (num == 0)
        {
            zer++;
        }
        else if (num < 0)
        {
            neg++;
        }
        
        

        printf("\n Do you like to continue ? ");
        printf("\n \"n\" for no \"y\" for yes :- ");
        scanf(" %c", &opt);
        
        /*!----the space before the %c is must otherwise you will
         not be able to enter the value of the variable 'opt' */
    }

    printf("---Here are your results----");
    printf("\n Total positive numbers you entered :- %d", pos);
    printf("\n Total negative numbers you entered :- %d", neg);
    printf("\n Total zeros numbers you entered :- %d", zer);

    printf("\n");
    return 0;
    
}