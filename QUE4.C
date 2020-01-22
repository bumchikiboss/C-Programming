// to tell if number is negative,zero or positive
#include<stdio.h>
#include<conio.h>

void main()
{
int n;
clrscr();
printf(" enter any number : ");
scanf("%d",&n);
if(n==0) printf("Zero");
else if(n>0) printf("Positive");
else if(n<0) printf("Negative");
getch();
}