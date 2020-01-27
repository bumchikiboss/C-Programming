																																																										#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c;
clrscr();

printf("enter the values of sides of triangle a,b,c : \n");
scanf("%d%d%d",&a,&b,&c);
if(!(a+b>=c && a+c>=b && c+b>=a)) printf("triangle not valid" );
else if(a==b==c) printf("equilateral");
else if(a==b || b==c || a==c) printf("isosceles");
else printf("normal triangle");

getch();
}