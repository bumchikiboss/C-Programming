
#include<stdio.h>
#include<conio.h>

void main()
{
int n;
clrscr();
printf("enter any number : ")    ;
scanf("%d",&n);

if(n%2!=0) printf(" Weird");
else if(n>1 && n<6) printf(" not weird");
else if(n>5 && n<21) printf( " weird");
else if(n>20) printf("not weird");
else printf("wrong input");
getch();
}