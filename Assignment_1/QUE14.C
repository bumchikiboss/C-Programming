#include<stdio.h>
#include<conio.h>

void main()
{
int a,b;
clrscr();

printf("enter any number : ");
scanf("%d",&a);
printf("enter the note you want to count ( Rs 100 , 200 , 500): " );
scanf("%d",&b);
switch(b)
{
case 100: printf("%d",(a/100));break;
case 200: printf("%d",(a/200));break;
case 500: printf("%d",(a/500));break;

default:printf("wrong input");
}

getch();
}