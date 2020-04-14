#include<stdio.h>
#include<conio.h>

void main()
{
int a;
clrscr();

printf("enter any year : ");
scanf("%d",&a);
if(a%4==0) printf("Leap Year");
else printf("Not a Leap Year");
getch();
}