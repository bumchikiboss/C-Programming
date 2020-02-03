#include<stdio.h>
#include<conio.h>
void main()
{
int i=2,n,a=1,b=1,m;
clrscr();
printf("enter the value of n : ");
scanf("%d",&n);
printf("1 1 ");
while(i<n)
{
m=a;
a=a+b;
b=m;
printf("%d ",a);
i++;
}
getch();
}