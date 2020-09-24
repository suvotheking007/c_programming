/*
If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 100
*/

//--------------------------
//This program needs improvement
/*Variables can be taken in other ways apart from considering 
  one variable for each subject marks*/


#include <stdio.h>

int main()

{   
    float m1, m2, m3, m4, m5;



    printf("\nEnter the marks of Subject 1 :- ");
    scanf("%f", &m1);

    printf("\n Enter the marks of Subject 2 :- ");
    scanf("%f", &m2);

    printf("\n Enter the marks of Subject 3 :- ");
    scanf("%f", &m3);

    printf("\n Enter the marks of Subject 4 :- ");
    scanf("%f", &m4);

    printf("\n Enter the marks of Subject 5 :- ");
    scanf("%f", &m5);


    /*Aggregate marks calculation*/
    float aggr;
    aggr = ( m1 + m2 + m3 + m4 + m5 );
    printf("\n Aggregate marks of the student is :- %f", aggr);

    /*Percentage marks calculation*/
    float per;
    per = (aggr/500)*100 ;
    printf("\n percentage the student got :- %f percent ", per );

    return 0;

}
