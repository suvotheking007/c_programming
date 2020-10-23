/*
In digital world colors are specified in Red-Green-Blue (RGB) format, 
with values of R, G, B varying on an integer scale from 0 to 255. In 
print publishing the colors are mentioned in Cyan-Magenta-YellowBlack (CMYK) format, with values of C, M, Y, and K varying on a real 
scale from 0.0 to 1.0. Write a program that converts RGB color to 
CMYK color as per the following formulae:

White = Max( Red / 255, Green / 255, Blue / 255 )

Cyan = (white - red/225)/white
Magnetta = (white - green/225)/white
Yellow = (white - blue/225)/white
Black = 1 - White

Note that if the RGB values are all 0, then the CMY values 
are all 0 and the K value is 1.
*/

#include <stdio.h>

int main()
{   
    float red, green, blue, white, max, red_f, green_f, blue_f, cyan, magnetta, yellow, black;

    printf("\n ---------Entering RGB values-------\n--------------------");
    printf("\n Please enter the value of Red (0 - 255) :- ");
    scanf("%f", &red);
    printf("\n Please enter the value of Green (0 - 255) :- ");
    scanf("%f", &green);
    printf("\n Please enter the value of Blue (0 - 255) :- ");
    scanf("%f", &blue);

    //check if all the values are within 0 to 255
    if ((red >= 0 && red <= 255) && (green >= 0 && green <= 255) && (blue >= 0 && blue <= 255))
    {
        red_f = red/225;
        green_f = green/255;
        blue_f = blue/255;

        //determining the value of white by finding the max value
        max = red_f;
        if (green_f > max)
        {
            max = green_f;
        }
        else if (blue_f > max)
        {
            max = blue_f;
        }
        white = max;

        cyan =     ( white - red_f ) / white;
        magnetta = ( white - green_f ) / white;
        yellow =   ( white - blue_f ) / white;

        black = 1 - white;

        printf("\n ----------The CMYK values ----------");
        printf("\n The cyan value is :- %f", cyan);
        printf("\n The magnetta value is :- %f", magnetta);
        printf("\n The yellow value is :- %f", yellow);
        printf("\n The black value is :- %f", black);
        
    }
    else
    {
        printf("\n One of the value entered is invalid \n so the program has been terminated --------");
    }

    printf("\n");

    return 0;
    
    
}