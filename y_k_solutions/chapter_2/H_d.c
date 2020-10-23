/*
Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r,phi)

Hint: 
r = sqrt ( x*x + y*y ) 
    and 
phi = arctan ( y / x )

arctan or "tan inverse" both are same

Here we have used a library function of 
math named "atan" and a constant "M_PI"
so while compilation in linux machine first we need to
  compile this code by linking with the math library as using the
  following command line command.
  
  "gcc file_name.c -lm"

*/

#include <stdio.h>
#include <math.h>
int main()

{
    double x, y, r, phi;

    //Taking values from the user 
    printf("\n Please enter the x cartesian coordinate value :- ");
    scanf("%lf", &x);
    printf("\n Please enter the y cartesian coordinate value :- ");
    scanf("%lf", &y);

    //conversion into polar coordinates
    r = sqrt(x*x + y*y);
    phi = atan(y/x);

    phi = phi * (180.0/ M_PI); //Conversion from radian to degree

    //Outputting to user
    printf("\n The polar coordinates are :- ( %.3lf, %.3f) \n", r, phi);

    return 0;


}