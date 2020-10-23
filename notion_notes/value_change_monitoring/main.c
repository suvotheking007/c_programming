#include <stdio.h>

void u_i_v();




int main()
{   

    while(1)
    {  
        char opt;
        

        printf("\n Please enter the option as specified ");
        printf("\n \' a \' using an unsigned integer variable  ");
        printf("\n \' b \' using a signed integer variable  ");
        printf("\n \' c \' using a long integer variable  ");
        printf("\n \' d \' using a short integer variable  ");
        printf("\n -----!Double is not a datatype for integers----");
        printf("\n -----!Double is not a datatype for integers----");
        printf("\n -----------------\n-----------\n---------\n---");
        printf("\n -----!Unsigned is not a datatype for floats----");
        printf("\n -----!Signed is not a datatype for floats----");
        printf("\n -----!Long is not a datatype for floats----");
        printf("\n -----!Short is not a datatype for floats----");
        printf("\n \' e \' using a float  variable  ");
        printf("\n \' f \' using a double  variable  ");
        printf("\n \' g \' using a long double float variable  ");
        printf("------\t-----\t--------\t------\t-------\t----  ");
        printf("\n Your option please :- ");
        scanf(" %c", &opt);

        if(opt >= 'a' && opt <= 'l')
        {

            u_i_v();
            break;

        }
        else
        {   
            printf("\n -----------------------------");
            printf("\n You entered a wrong option !!");
            printf("\n -----------------------------");

        }
        
    }

}

//Function definations ->
void u_i_v()
{
    unsigned int v;
    while (1)
    {
        printf("\t %d",v);
        v++;
    }
}

