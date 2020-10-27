/*
Write a function to compute the distance between two points and
use it to develop another function that will compute the area of the
triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
these functions to develop a function which returns a value 1 if the
point (x, y) lines inside the triangle ABC, otherwise returns a value
0.

distance between two points :-
sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))

area of a triangle from the given three sides a, b, c (Heron's formula) :- 
s_p = (a + b + c) / 2   // s_p --> semi perimeter
area = sqrt(s_p * (s_p - a) * (s_p - b) * (s_p - c))

condition for a point P falling in a triangle formed by three points A, B, C :-
area of triangleABC = area of triangleABP + area of triangleBCP + area of triangleACP
*/

#include <stdio.h>
#include <math.h>

double length(float, float, float, float);
double area(double, double, double, double);

void main()
{
    float x1, y1, x2, y2, x3, y3, xP, yP, triangle_area, triangle_area1, triangle_area2, triangle_area3;
    double s_p, a, b, c, aa, bb, cc;

    char opt = 'y';
    
    while (1)
    {
        if (opt == 'y' || opt == 'Y')
        {
            printf("\n please enter the x coordinate of point 1 :- ");
            scanf("%f", &x1);
            printf("\n please enter the y coordinate of point 1 :- ");
            scanf("%f", &y1);
            printf("\n please enter the x coordinate of point 2 :- ");
            scanf("%f", &x2);
            printf("\n please enter the y coordinate of point 2 :- ");
            scanf("%f", &y2);
            printf("\n please enter the x coordinate of point 3 :- ");
            scanf("%f", &x3);
            printf("\n please enter the y coordinate of point 3 :- ");
            scanf("%f", &y3);
            printf("\n--------------");
            printf("\n Now please enter the x coordinate of the point that you want to check :- ");
            scanf("%f", &xP);
            printf("\n Now please enter the y coordinate of the point that you want to check :- ");
            scanf("%f", &yP);

            aa = a = length(x1, y1, x2, y2);
            bb = b = length(x2, y2, x3, y3);
            cc = c = length(x3, y3, x1, y1);

            s_p = (a + b + c) / 2;

            triangle_area = area( a, b, c, s_p);

            aa = length(x2, y2, x1, y1);
            bb = length(xP, yP, x2, y2);
            cc = length(x1, y1, xP, yP);

            s_p = (aa + bb + cc) / 2;

            triangle_area1 = area( aa, bb, cc, s_p);

            aa = a;
            bb = b;
            cc = c;

            aa = length(x3, y3, x2, y2);
            bb = length(xP, yP, x3, y3);
            cc = length(x2, y2, xP, yP);

            s_p = (aa + bb + cc) / 2;

            triangle_area2 = area( aa, bb, cc, s_p);

            aa = a;
            bb = b;
            cc = c;

            aa = length(x3, y3, x1, y1);
            bb = length(xP, yP, x3, y3);
            cc = length(x1, y1, xP, yP);

            s_p = (aa + bb + cc) / 2;

            triangle_area3 = area( aa, bb, cc, s_p);

            if (triangle_area == triangle_area1 + triangle_area2 + triangle_area3)
            {
                printf("\n 1");
            }
            else
            {
                printf("\n 0");
            }
        }
        
    }
    
}

double length(float x1, float y1, float x2, float y2)
{
    double l, distx, disty;
    distx = x2 - x1;
    disty = y2 - y1;

    l = sqrt(pow(distx, 2.0) + pow(disty, 2.0));

    return(l);

}

double area(double a, double b, double c, double s_p)
{
    double AREA;

    AREA = sqrt(s_p * (s_p - a) * (s_p - b) * (s_p - c) );

    return(AREA);
}