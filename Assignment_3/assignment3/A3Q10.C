#include<stdio.h>
#include<conio.h>
void main()
{
int i=2,j=2,n,flag=0;
clrscr();
printf("enter the value of n : ");
scanf("%d",&n);

while(i<=n)
{
  while(j<i)
  {
   if(i%j++==0) flag=1;

  }
if(flag==0) printf("%d ",i);
i++;
flag=0,j=2;
}

getch();
}