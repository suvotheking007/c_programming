/*
Wind chill factor is the felt air temperature on exposed skin due to
wind. The wind chill temperature is always lower than the air
temperature, and is calculated as per the following formula:
wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * (v raised to power 0.16)
where t is the temperature and v is the wind velocity. Write a
program to receive values of t and v and calculate wind chill factor
(wcf).
*/

//----######## Other versions of this program and their speciality #######--------
/*

    v2 ---------------------------
        This gives more accurate and precise results using conditional statements

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float t, wcf;

    //Sinice the "pow" function only accepts double data type value
    double v;

    //entering value by the user
    printf("\n Please enter the air temperature :- ");
    scanf("%f", &t);
    printf("\n Please enter the wind velocity :- ");
    scanf("%lf", &v);

    //calculation of wind chilling factor
    wcf = 35.74 + 0.6215*t + ( 0.4275*t - 35.75 ) * pow(v , 0.16);

    //giving output to the user
    printf("\n The wind chilling factor would be -> %.2lf \n ", wcf);

    return 0;

}
