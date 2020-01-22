//  to find max between 3 no.s
#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c;
clrscr();
printf("enter three digits : ");
scanf("%d%d%d",&a,&b,&c);
if (a>=b && a>=c) printf(" %d is the maximum " ,a);
else if(b>=a && b>=c) printf(" %d is the maximum ",b);
else if(c>=a && c>=b) printf(" %d is the maximum ",c);

getch();
}
