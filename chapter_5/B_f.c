/*
Write a program for a matchstick game being played between the 
computer and a user. Your program should ensure that the 
computer always wins. Rules for the game are as follows:

 There are 21 matchsticks.
 The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
 After the person picks, the computer does its picking.
 Whoever is forced to pick up the last matchstick loses the game.
*/

//!---- this code can be made more intuative using continue and break statement------

/* --------variables description ---
u_n -> user entered number
c_n -> computer entered number
m_n -> match stick number
*/

#include <stdio.h>

int main()
{
    int u_n, c_n, m_n;

    printf("\n Please enter the number of matches :- ");
    scanf("%d", &m_n);

    while (m_n != 1)
    {
        printf("\n Please enter the number of matchstick \n you want to choose from 1, 2, 3 or 4 :- ");
        scanf("%d", &u_n);

        if (u_n <=4 && u_n >= 1)
        {   
            printf("\n remaining matches :- %d ", m_n);
            m_n = m_n - u_n;
            c_n = 5 - u_n;
            printf("\n I have picked up %d ! ", c_n);
            m_n = m_n - c_n;
        }
        else
        {
            printf("\n You broke the rules !");
        }
        
        
    }
    
    printf("\n You lose the match ! ");
    printf("\n");
    return 0;
    
}