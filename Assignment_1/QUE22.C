#include<stdio.h>
#include<conio.h>

void main()
{
float a,b,bill;
clrscr();

printf("enter elctricity unit charges : ");
scanf("%f",&a);
if(a>250)
{
b=a-250;
bill=((b*1.5)+(220));
bill=(bill+(bill*0.2));
}
else if(a>150 && a<=250)
{
b=a-150;
bill=((b*1.2)+(100));
bill=(bill+(bill*0.2));
}
else if(a>50 && a<=150)
{
b=a-50;
bill=((b*0.75)+(25));
bill=(bill+(bill*0.2));
}
printf("bill = Rs %f",bill);
getch();
}