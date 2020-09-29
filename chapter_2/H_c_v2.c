/*
If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle.

Formulas ->

semi perimeter (s_p) = (sum of the sides) / 2
area = square root of (s_p(s_p-a)(s_p-b)(s_p-c))

Here we have used a library function of math named "pow"
so while compilation in linux machine first we need to
  compile this code by linking with the math library as using the
  following command line command.
  
  "gcc file_name.c -lm"

*/

/*
--------------------new in v2 -----------------------
used double data type for getting more precise results 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, s_p, area;

    //Taking the input from the user ----------------------------------
    printf("\n Please enter the value of first side :- ");
    scanf("%lf", &a);
    printf("\n Please enter the value of second side :- ");
    scanf("%lf", &b);
    printf("\n Please enter the value of third side :- ");
    scanf("%lf", &c);

    //Calculation of the semi perimeter and storing the value in s_p variable-----------
    s_p = (a+b+c)/2; 

    //printing out the semi perimeter --------------->>>>>>>>>>>>> 
    printf("\n The semi perimeter of the triangle is = %f ", s_p);

    //Calculation of the area ;
    area = sqrt(s_p*(s_p-a)*(s_p-b)*(s_p-c)) ;

    //printing out the results -------------->>>>>>>>>>>>>
    printf("\n The area of the triangle is = %.2lf \n",area);

    return 0;        

}