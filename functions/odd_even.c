/* program to check whether a number is even or odd using functions.*/

#include<stdio.h>

void checkevenodd(int n)
{
    if(n%2==0)
        printf("\n Given Number %d is Even.",n);
    else
        printf("\n Given Number %d is Odd.",n);
}
void main()
{
    int x;
    printf("\n Enter a Number to check Even or Odd:");
    scanf("%d",&x);
    checkevenodd(x);
}