/*
The Body Mass Index (BMI) is defined as ratio of the weight of a 
person (in kilograms) to the square of the height (in meters). Write 
a program that receives weight and height, calculates the BMI, and 
reports the BMI category as per the following table:

BMI category                BMI

Starvation                 <15
Anorexic                   15.1 to 17.5
Underweight                17.6 to 18.5
Ideal                      18.6 to 24.9
Overweight                 25 to 25.9
Obese                      30 to 30.9
Morbidly Obese             >= 40

*/
#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("\n Please enter the weight (in kilograms) :- ");
    scanf("%f", &weight);
    printf("\n Please enter the height (in meterss) :- ");
    scanf("%f", &height);

    //----BMI calculation
    bmi = weight / ( height * height);

    printf("\n your bmi is :- %.2f", bmi);

    if (bmi < 15)
    {
        printf("\n Bmi status :- starvation");
    }
    else if (bmi >= 15.1 && bmi <= 17.5)
    {
        printf("\n Bmi status :- Anorexic");
    }
    else if (bmi >= 17.6 && bmi <= 18.5)
    {
        printf("\n Bmi status :- Underweight");
    }
    else if (bmi >= 18.6 && bmi <= 24.9)
    {
        printf("\n Bmi status :- Ideal");
    }
    else if (bmi >= 25 && bmi <= 25.9)
    {
        printf("\n Bmi status :- Overweight");
    }
    else if (bmi >= 30 && bmi <= 30.9)
    {
        printf("\n Bmi status :- Obese");
    }
    else
    {
        printf("\n Bmi status :- Morbidly obese");
    }

    printf("\n");
    return 0;
    
    
}