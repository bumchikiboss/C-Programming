//  to check whether triangle exists or not
#include<stdio.h>
#include<conio.h>

void main()
{
float a,b,c;
clrscr();
printf("enter all three angles of the triangle :- \n");
scanf("%f%f%f",&a,&b,&c);
if((a+b+c)!=180) printf("triangle cannot exist ");
else printf("triangle exists");
getch();
}
