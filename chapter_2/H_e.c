/*

Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the
distance (D) between them in nautical miles. The formula for
distance in nautical miles is:
D = 3963 arccos ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )

----------------------------------------------
IMPORTANT!!!!!!    IMPORTANT!!!!!!!!!

The formula specified here i.e 

"D = 3963 arccos ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )"
"Where D = Distance between two specified points"

IMPORTANT!!!!!!             IMPORTANT!!!!!!  
-------------------------------------------------


Here we have used a library function of math named "acos, cos and sin"
so while compilation in linux machine first we need to
  compile this code by linking with the math library as using the
  following command line command.
  
  "gcc file_name.c -lm"
*/

#include <stdio.h>
#include <math.h>

int main()

{  
    long double L1, L2, G1, G2, distance, dL, dG;
    //here dL and dG are the two variables which will store the 
    //longitudinal distance (dL) and latitudinal distance (dG)


    //Taking values from the user
    printf("\n Please enter the values of latitude-------");
    printf("\n Please enter the L1 :- ");
    scanf("%Lf", &L1); 
    printf("\n Please enter the L2 :- ");
    scanf("%Lf", &L2);

    printf("\n Please enter the values of longitude-------");
    printf("\n Please enter the G1 :- ");
    scanf("%Lf", &G1); 
    printf("\n Please enter the G2 :- ");
    scanf("%Lf", &G2);

    //Calculation of Distance between the two points
    dL = L2 - L1;
    dG = G2 - G1;

    distance = sqrt((dL*dL)+(dG*dG));

    //Distance converting to miles
    distance = (distance*100)/1.852;

    //giving the output to the user
    printf("\n The distance in nautical miles is %.3Lf miles \n", distance);

    return 0;
}