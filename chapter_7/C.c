/*
1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Once a menu item is selected the appropriate action should be
taken and once this action is finished, the menu should reappear.
Unless the user selects the ‘Exit’ option the program should
continue to run.
Hint: Make use of an infinite while and a switch statement.
*/
#include <stdio.h>
int main()
{
    while (1)
    {   
        //---------------------------------------------
        //-----SOFTWARE BEGINS-------------------------
        //------------------------------------------

        int opt,num;
        char chk = 'y';

        //---------------------------------------
        //---USER INPUT SECTION-------------------
        //-------------------------------------

        printf("\n ---------------");
        printf("\n To find factorial of a number enter \'1\'");
        printf("\n To verify a number is prime or not enter \'2\'");
        printf("\n To verify a number is odd or even enter \'3\'");
        printf("\n To exit out type \'4\' ");
        printf("\n");
        printf("\n Please enter an option :- ");
        scanf("%d", &opt);

        //-----------------------------------------
        //-----------------------------------------





        

        //Program will run if the user enters a value between 1 and 3
        if (opt >= 1 && opt <= 3)
        {
            
            switch (opt)
            {
            //case 1 begins---------------------
            case 1:
                printf("\n ----Finding factorial of a number --->>");
                printf("\n Please enter the number :- ");
                scanf("%d", &num);
                for (int i = 1; i <= num; i++)
                {
                    if (num % i == 0)
                    {
                        printf(" %d",i);
                        
                        if (i != num)
                        {
                            printf(",");
                        }
                        
                    }
                    
                }
                break;
            //-------------------------------------
            //-------------------------------------



            //case 2 begins--------------
            case 2:
                printf("\n -----Check if a number is prime or not--->>");
                printf("\n Please enter the number :- ");
                scanf("%d", &num);

                if (num == 1)
                {
                    printf("\n \'1\' is neither a prime nor a composite number");
                    break;
                }
                
                int composite = 0;

                for (int i = 2; i < num; i++)
                {   
                    if (num % i == 0)
                    {
                        composite = 1;
                    }
                }

                if (composite)
                {
                    printf("\n %d is a composite number !", num);
                    break;
                }
                else
                {
                    printf("\n %d is a prime number !", num);
                    break;
                }
                
                
            //------------------------------------
            //------------------------------------


            //case 3 begins-------------------------
            case 3:
                printf("\n ------Check a number is odd or even---");
                printf("\n Please enter the number :- ");
                scanf("%d", &num);

                if (num % 2 == 0)
                {
                    printf("\n %d is even", num);
                    break;
                }
                else
                {
                    printf("\n %d the number is odd",num);
                    break;
                }
            
            //No default case is specified here
            default:
                break;
            }

        }

        //if the user has entered '4' the loop breaks and user exits out this software
        else if (opt == 4)
        {   
            printf("\n-----------------------------");
            printf("\n----THANK YOU FOR USING ME---");
            printf("\n-----------------------------");
            break;
        }
        //-----------------------------------------------------

        //Prompt will appear to the user if he enters a wrong option 
        else
        {   
            while (1)
            {
                printf("\n Sorry you didn't entered any specified option! ");
                printf("\n To continue type \'y\' else type \'n\' :-");
                scanf(" %c", &chk);
                
                //Prompt that appears if the user still had entered a wrong option
                if (chk != 'Y' && chk != 'y' && chk != 'N' && chk != 'n')
                {   
                    printf("\n You didn't entered a specified option !");
                    printf("\n -------------------");
                    continue;
                }

                //here the loop breaks if the user has entered a right option
                else
                {
                    break;
                }
                
                
            }
            
        }
        

        //----------------------------------------
        //----------------------------------------
        //checking the option entered by the user
        //if user has entered 'y' the program will take to the "SOFTWARE BEGINS"
        if (chk == 'Y' || chk == 'y')
        {
            continue;
        }

        //if the user has entered 'n' the loop breaks and user exits out this software
        else if (chk == 'N' || chk == 'n')
        {   
            printf("\n I cannot work if you do not specify an option !");
            printf("\n--------------");
            printf("\n You can also start from the begning");
            printf("\n-------------------------");
            break;
        }  
        
    }

    printf("\n");
    return 0;
    
}