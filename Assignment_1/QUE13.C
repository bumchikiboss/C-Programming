#include<stdio.h>
#include<conio.h>

void main()
{
int a;
clrscr();

printf("enter any number : ");
scanf("%d",&a);
if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12) printf("month has 31 days");
else if(a==2) printf("28 or 29 days");
else if(a>12) printf("wrong input");
else printf("30 days");
getch();
}