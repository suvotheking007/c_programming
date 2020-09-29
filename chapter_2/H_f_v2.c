/*
Wind chill factor is the felt air temperature on exposed skin due to
wind. The wind chill temperature is always lower than the air
temperature, and is calculated as per the following formula:
wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * (v raised to power 0.16)
where t is the temperature and v is the wind velocity. Write a
program to receive values of t and v and calculate wind chill factor
(wcf).

*/

/*---------------------New in v2 ---------------------

Here it has been used the conditional statement to calculate precice value 
based on a logical value entered

*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    double airTemp, windS, wcf;

    printf("Air temperature (Celsius): ");
    scanf("%lf", &airTemp);
    printf("Wind speed (km/h): ");
    scanf("%lf", &windS);
    if (airTemp <= 0.0)
    {
        if (windS >= 5.0)
            wcf = 13.12 + 0.6215*airTemp - 11.37*pow(windS,0.16) +
                0.3965*airTemp*pow(windS,0.16);
        else if (windS > 0.0 && windS < 5.0)
            wcf = airTemp + ((-1.59+0.1345*airTemp)/5.0)*windS;
        else {
            printf("Sorry there is no wind!\n");
            return 1;
        }
        printf("The temperature feels like %.2f degrees Celsius\n", wcf);
    }
    else
        printf("Unable to calculate - the air temperature is too high\n");

    return 0;
}