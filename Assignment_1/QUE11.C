#include<stdio.h>
#include<conio.h>

void main()
{
char a;
clrscr();

printf("enter any character : ");
scanf("%c",&a);
if(a>64 && a<91) printf("Uppercase");
else if(a>96 && a<123) printf("Lowercase");
else printf("wrong input");
getch();
}