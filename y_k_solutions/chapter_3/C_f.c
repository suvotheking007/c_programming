/*
If the ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three.
*/

#include <stdio.h>

int main()
{
    int ram_age, shyam_age, ajay_age;

    printf("\n Please enter the age of Ram :-");
    scanf("%d", &ram_age);
    printf("\n Please enter the age of Shyam :-");
    scanf("%d", &shyam_age);
    printf("\n Please enter the age of ajay :-");
    scanf("%d", &ajay_age);

    //condition begins
    if (ram_age < shyam_age)
    {
        if (ram_age < ajay_age)
        {
            printf("\n Ram is younger");
        }
        else
        {
            printf("\n Ajay is younger");
        }
         
    }
    else
    {
        printf("\n Shyam is younger");
    }
    
    printf("\n");

    return 0;
    
}