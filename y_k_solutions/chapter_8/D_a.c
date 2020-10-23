/*
Write a function to calculate the factorial value of any integer
entered through the keyboard.
*/

#include <stdio.h>

//function declaration-----
void fact(int);
//-------------------------




//----Main function------

void main()
{   
    int a;
    char opt = 'y';

    while(opt == 'y' || opt == 'Y')
    {
        printf("\n Please enter the number :- ");
        scanf("%d", &a);

        printf("\n factorial of %d would be :-", a);
        printf("\n");
        fact(a);

        printf(" \n You want to continue? \'y\' or \'n\' ");
        scanf(" %c",&opt);
        
        if (opt == 'n' || opt == 'N')
        {
            printf("\n Thank you-----");
            printf("\n Program terminated----");
            break;
        }
        else if (opt == 'y' || opt == 'Y')
        {
            continue;
        }
        else
        {
            printf("\n you entered a wrong option \n Continue further--");
        }
        
        
        
    }
    printf("\n");

}

//----Main function ends------







//-----Function defination---------
void fact(int a)
{
    int f,i;

    for(i = 1; i <= a; i++)
    {
        if(a % i == 0)
        {
            printf(" %d",i);
        }
    }

}
//-----Function defination ends---------