#include<stdio.h>
#include<conio.h>
void main()
{
float pro=1,num;
int i=0,n;
clrscr();
printf("enter no. of entries : ");
scanf("%d",&n);

while(i<n)
{
printf("enter number : ");
scanf("%f",&num);
pro*=num;
i++;
}
printf("cumulative product is : %f",pro);
getch();
}