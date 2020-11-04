#include <math.h>
#include <stdio.h>
#define PI 3.14

float p, s, a;

#define AREA_PERI_TRIANGLE(x, y, z) \
p = (x + y + z);\
s = p/2;\
a = s * (s - x) * (s - y) * (s - z);\
float A = a/(a*a);\
printf("\n The perimeter of triangle is :- %.2f",p);\
printf("\n The area of triangle is :- %.2f",A);\


#define AREA_PERI_SQUARE(x) \
p = x * 4;\
a = x*x;\
printf("\n The perimeter of the square is :- %.2f",p);\
printf("\n The area of square is :- %.2f",a);\



#define AREA_PERI_CIRCLE(x) \
p = 2 * PI * x;\
a = PI * x * x;\
printf("\n The perimeter of the circle is :- %.2f",p);\
printf("\n The area of circle is :- %.2f",a);
