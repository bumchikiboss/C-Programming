#include<stdio.h>
#include<conio.h>

void main()
{
float temp;
clrscr();
printf("enter value : ");
scanf("%f",&temp);
if(temp==0) printf("ICE");
else if(temp>0 && temp<=100) printf("WATER");
else if(temp>100) printf("STEAM");
getch();
}