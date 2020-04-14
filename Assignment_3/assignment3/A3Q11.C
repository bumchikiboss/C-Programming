#include<stdio.h>
#include<conio.h>
void main()
{

int i,n,flag,a,b,m;
while(1)
{
i=2,flag=0,a=1,b=1;

clrscr();
printf("enter the number : ");
scanf("%d",&n);
if(n==0) break;

while(i<n)
{

if(n%i==0) flag=1;
i++;
}
if(flag==0) printf("%d is a prime number \n",n);
flag=0,i=0;

if(n==1 )printf("%d is a fabonacci number\n",n);
while(i<n)
{
m=a;
a=a+b;
b=m;

if(n==a) printf("%d is a fibonacci number\n",n);
i++;
}
printf("______ give input as number '0' to terminate program ______\n");
getch();
}

}