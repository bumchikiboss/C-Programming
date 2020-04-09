/* C program to find circumference ,diameter and area of circle using functions.*/

#include<stdio.h>

void circle(int r)
{
    float d,c,a;
    d=(2*r);
    c=(2*3.14*r);
    a=(3.14*r*r);
    printf("\n The Diameter:%f, Circumference:%f and Area:%f.",d,c,a);
}
void main()
{
  float r;
  printf("\n Enter the Radius of the Circle:");
  scanf("%f",&r);
  circle(r);
}