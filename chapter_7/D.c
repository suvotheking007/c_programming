/*
Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the
number of subjects he has failed in. Use the following logic:

 If the student gets first class and the number of subjects he
failed in is greater than 3, then he does not get any grace.
Otherwise the grace is of 5 marks per subject.

 If the student gets second class and the number of subjects he
failed in is greater than 2, then he does not get any grace.
Otherwise the grace is of 4 marks per subject.

 If the student gets third class and the number of subjects he
failed in is greater than 1, then he does not get any grace.
Otherwise the grace is of 5 marks.

*/

#include <stdio.h>
int main()
{   
    int f, g;
    char opt, c;

    while(1)
    {   

        printf("\n Please enter the class of the student :- ");
        scanf(" %c", &c);


        if ((c >= '1') && (c <= '3'))
        {   

            printf("\n Please enter the number of failed subjects of the student :- ");
            scanf("%d", &f);

            switch(c)
            {
            case '1':
                if(f > 3)
                {
                    printf("\n Sorry you did not get any grace ! ");
                    break;
                }
                else
                {
                    g = 5 * f;
                    printf("\n You got %d marks in grace ! ", g);
                    break;
                }

            case '2':
                if(f > 2)
                {
                    printf("\n Sorry you did not get any grace ! ");
                    break;
                }
                else
                {
                    g = 5 * f;
                    printf("\n You got %d marks in grace ! ", g);
                    break;
                }
            case '3':
                if(f > 1)
                {
                    printf("\n Sorry you did not get any grace ! ");
                    break;
                }
                else
                {
                    g = 5 * f;
                    printf("\n You got %d marks in grace ! ", g);
                    break;
                }


            }           
        }
        else
        {
            printf("\n You have entered a wrong class");
            continue;

        }
        

        


        printf("\n------------End of execution-----------");

    }
}
 