
/*Write a C program to input week number and print week day.*/

#include<stdio.h>

void main()
{
int a;

 printf("\nEnter any no. :");
 scanf("%d",&a);
 switch(a)
  {
   case 1 : printf("\nSunday");
	      break;
   case 2 : printf("\nMonday");
	      break;
   case 3 : printf("\nTuesday");
	      break;
   case 4 : printf("\nWednesday");
	      break;
   case 5 : printf("\nThursday");
	      break;
   case 6 : printf("\nFriday");
	      break;
   case 7 : printf("\nSaturday");
	      break;
   default  : break;
  }
 getchar();
}