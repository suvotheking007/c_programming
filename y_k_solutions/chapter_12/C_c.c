#include "./header_files/areaperi.h"

void main()
{
    float a, b, c;

    printf("\n For triangle :----------");
    printf("\n Please enter the first side :- ");
    scanf("%f",&a);
    printf("\n Please enter the second side :- ");
    scanf("%f",&b);
    printf("\n Please enter the third side :- ");
    scanf("%f",&c);

    AREA_PERI_TRIANGLE(a, b, c)

    printf("\n For square :----------");
    printf("\n Please enter the side :- ");
    scanf("%f",&a);

    AREA_PERI_SQUARE(a)

    printf("\n For circle :----------");
    printf("\n Please enter the radius side :- ");
    scanf("%f",&a);

    AREA_PERI_CIRCLE(a)

    printf("\n");
    
}

