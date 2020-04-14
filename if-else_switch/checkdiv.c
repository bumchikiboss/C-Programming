/*Write a C program to check whether a number is divisible by 5 and 11 or not.*/

#include<stdio.h>

void main()
{
 int a;
 
 printf("\nEnter number  :");
 scanf("%d",&a);
 if(a%5==0 && a%11==0)
  {
   printf("\nEntered number is divisible");
  }
 else
  {
    printf("\nEntered number is not divisible");
  }
 getchar();

}
