#include<stdio.h>
#include<conio.h>

void main()
{
int p,c,b,m,cs;
clrscr();

printf("enter any marks of the subjects \nPhysics , Chemistry , Biology , Maths , Computer accordingly : \n");
scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
if(p<40) printf("physics : F");
if(p>=40 && p<60) printf("physics : E");
if(p>=60 && p<70) printf("physics : D");
if(p>=70 && p<80) printf("physics : C");
if(p>=80 && p<90) printf("physics : B");
if(p>=90) printf("physics : A");
printf("\n");

if(c<40) printf("chemistry : F");
if(c>=40 && c<60) printf("chemistry : E");
if(c>=60 && c<70) printf("chemistry : D");
if(c>=70 && c<80) printf("chemistry : C");
if(c>=80 && c<90) printf("chemistry : B");
if(c>=90) printf("chemistry : A");
printf("\n");

if(b<40) printf("bio : F");
if(b>=40 && b<60) printf("bio : E");
if(b>=60 && b<70) printf("bio : D");
if(b>=70 && b<80) printf("bio : C");
if(b>=80 && b<90) printf("bio : B");
if(b>=90) printf("bio : A");
printf("\n");

if(m<40) printf("maths : F");
if(m>=40 && m<60) printf("maths : E");
if(m>=60 && m<70) printf("maths : D");
if(m>=70 && m<80) printf("maths : C");
if(m>=80 && m<90) printf("maths : B");
if(m>=90) printf("maths : A");
printf("\n");

if(cs<40) printf("computer : F");
if(cs>=40 && cs<60) printf("computer : E");
if(cs>=60 && cs<70) printf("computer : D");
if(cs>=70 && cs<80) printf("computer : C");
if(cs>=80 && cs<90) printf("computer : B");
if(cs>=90) printf("computer : A");
printf("\n");
getch();
}