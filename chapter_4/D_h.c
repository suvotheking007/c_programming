/*
Write a program that receives month and date of birth as input and 
prints the corresponding Zodiac sign based on the following table:

Sun sign               From - to

Capricorn              December 22 - January 19 
Aquarius               January 20 - February 17
Pisces                 February 18 - March 19
Aries                  March 20 - April 19
Taurus                 April 20 - May 20
Gemini                 May 21 - June 20
Cancer                 June 21 - July 22
Leo                    July 23 - August 22
Virgo                  August 23 - September 22
Libra                  September 23 - October 22
Scorpio                October 23 - November 21
Sagittarius            November 22 - December 21

*/

//There is a scope of using loop statements in this program--------

#include <stdio.h>

int main()
{
    int month, day;

    printf("\n Please enter the serial number of month :- ");
    scanf("%d", &month);
    printf("\n Please enter the serial number of day :- ");
    scanf("%d", &day);

    if ( (month >= 1 && month <=12) && (day >= 1 && day <= 31) )
    {
        if (month == 1)
        {
            if (day <= 19)
            {
                printf("\n Your sun sign is Capricorn ! ");
            }
            else
            {
                printf("\n Your sun sign is Aquaris ! ");
            }  
        }
        if (month == 2)
        {
            if (day <= 17)
            {
                printf("\n Your sun sign is Aquaris ! ");
            }
            else
            {
                printf("\n Your sun sign is Pisces ! ");
            }  
        }
        if (month == 3)
        {
            if (day <= 19)
            {
                printf("\n Your sun sign is Pisces ! ");
            }
            else
            {
                printf("\n Your sun sign is Aries ! ");
            }  
        }
        if (month == 4)
        {
            if (day <= 19)
            {
                printf("\n Your sun sign is Aries ! ");
            }
            else
            {
                printf("\n Your sun sign is Taurus ! ");
            }  
        }
        if (month == 5)
        {
            if (day <= 20)
            {
                printf("\n Your sun sign is Taurus ! ");
            }
            else
            {
                printf("\n Your sun sign is Gemini ! ");
            }  
        }
        if (month == 6)
        {
            if (day <= 20)
            {
                printf("\n Your sun sign is Gemini ! ");
            }
            else
            {
                printf("\n Your sun sign is Cancer ! ");
            }  
        }
        if (month == 7)
        {
            if (day <= 22)
            {
                printf("\n Your sun sign is Cancer ! ");
            }
            else
            {
                printf("\n Your sun sign is Leo ! ");
            }  
        }
        if (month == 8)
        {
            if (day <= 22)
            {
                printf("\n Your sun sign is Leo ! ");
            }
            else
            {
                printf("\n Your sun sign is Virgo ! ");
            }  
        }
        if (month == 9)
        {
            if (day <= 22)
            {
                printf("\n Your sun sign is Virgo ! ");
            }
            else
            {
                printf("\n Your sun sign is Libra ! ");
            }  
        }
        if (month == 10)
        {
            if (day <= 22)
            {
                printf("\n Your sun sign is Libra ! ");
            }
            else
            {
                printf("\n Your sun sign is Scorpio ! ");
            }  
        }
        if (month == 11)
        {
            if (day <= 21)
            {
                printf("\n Your sun sign is Scorpio ! ");
            }
            else
            {
                printf("\n Your sun sign is Sagittarius ! ");
            }  
        }
        if (month == 12)
        {
            if (day <= 21)
            {
                printf("\n Your sun sign is Sagittarius ! ");
            }
            else
            {
                printf("\n Your sun sign is Capricorn ! ");
            }  
        }
        
    }
    else
    {
        printf("\n One of the value entered is invalid \n so the program has been terminated --------");
    }

    printf("\n");
    return 0;
    
    
}