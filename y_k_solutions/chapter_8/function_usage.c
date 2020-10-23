#include <stdio.h>

int a, b, sum, mul;

int main()
{
    void add();
    void multiply();
    void result_print();
    char opt = 'y';

    while (1)
    {
        add();
        multiply();
        result_print();
        printf("\n would you like to continue further ? y or n :- ");
        scanf(" %c", &opt);

        if (opt != 'n' && opt != 'N' && opt != 'y' && opt != 'Y' )
        {   
            printf("\n");
            printf("\n please choose the option correctly !---");
            printf("\n");
            continue;
        }
        else if (opt == 'n' || opt == 'N')
        {
            printf("\n Thank you");
            printf("\n");
            break;
        }
        
        
    }
}

    void add()
    {
        
        printf("\n please enter a :-");
        scanf("%d", &a);
        printf("\n please enter b :-");
        scanf("%d", &b);
        sum = a + b;
        printf("sum = %d", a + b);
    }
    
    void multiply()
    {
       mul = sum *4;
    }

    void result_print()
    {
        printf("\n sum + mul = %d", mul);
    }
