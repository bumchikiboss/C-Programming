/*Write a C program to find maximum between two numbers.*/

#include<stdio.h>

void main()
{
 int a,b;

 printf("\nEnter 2 different number  :");
 scanf("%d %d",&a,&b);
 if(a<b)
  {
   printf("\nGreater number is :%d",b);
  }
 else
  {
   printf("\nGreater number is :%d",a);
  }
 getchar();

}