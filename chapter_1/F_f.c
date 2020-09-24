/*
Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half parallel to its
shorter sides. Thus paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, ... A8.
*/

//--------------------------------------------
//This program needs improvement
/*
  This program follows a pattern
  for this reason, we can also use loops here
*/


#include <stdio.h>
int main()
{
    int horizontal = 1189 , vertical = 841;

    printf("\n size of A0 is %d mm X %d mm", horizontal, vertical);

    printf("\n size of A1 is %d mm X %d mm", vertical, horizontal/2);
    horizontal = horizontal/2;

    printf("\n size of A2 is %d mm X %d mm", horizontal, vertical/2);
    vertical = vertical/2;

    printf("\n size of A3 is %d mm X %d mm", vertical, horizontal/2);
    horizontal = horizontal/2;

    printf("\n size of A4 is %d mm X %d mm", horizontal, vertical/2);
    vertical = vertical/2;

    printf("\n size of A5 is %d mm X %d mm", vertical, horizontal/2);
    horizontal = horizontal/2;

    printf("\n size of A6 is %d mm X %d mm", horizontal, vertical/2);
    vertical = vertical/2;

    printf("\n size of A7 is %d mm X %d mm", vertical, horizontal/2);
    horizontal = horizontal/2;

    printf("\n size of A8 is %d mm X %d mm", horizontal, vertical/2);
    vertical = vertical/2;

    printf("\n");
   
}