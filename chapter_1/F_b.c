/*
The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters.
*/

//----------------------------
//this program needs improvement
//Unnecessary more variables are taken
//------------------------------------

#include <stdio.h>

int main()
{
    float dist_1, dist_2;

    printf("\n");
    printf("Please enter the first distance (enter in kms.) :- ");
    scanf("%f", &dist_1);
    printf("Please enter the second distance (enter in kms.) :- ");
    scanf("%f", &dist_2);
    

    
    /*Distance calculation in meters*/
    printf("\n");
    printf("\n");
    float distance_meters;
    distance_meters = (dist_1*1000);
    printf("Distance of first :- %f mts. \n", distance_meters);
    distance_meters = (dist_2*1000);
    printf("Distance of second :- %f mts. \n", distance_meters);

    /*Distance calculation in feet*/
    printf("\n");
    printf("\n");
    float distance_feet;
    distance_feet = (dist_1*3280.84);
    printf("Distance of first :- %f foots. \n", distance_feet);
    distance_feet = (dist_2*3280.84);
    printf("Distance of second :- %f foots. \n", distance_feet);

    /*Distance calculation in inches*/
    printf("\n");
    printf("\n");
    float distance_inches;
    distance_inches = (dist_1*39370.079);
    printf("Distance of first :- %f mts. \n", distance_inches);
    distance_inches = (dist_2*39370.079);
    printf("Distance of second :- %f mts. \n", distance_inches);

    /*Distance calculation in centimeters*/
    printf("\n");
    printf("\n");
    float distance_cmts;
    distance_cmts = (dist_1*100000);
    printf("Distance of first :- %f cmts. \n", distance_cmts);
    distance_cmts = (dist_2*100000);
    printf("Distance of second :- %f cmts. \n", distance_cmts);
    


    

    return 0;

}