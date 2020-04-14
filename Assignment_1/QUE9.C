// to check vowel or consonent
#include<stdio.h>
#include<conio.h>

void main()
{
char a;
clrscr();
printf("enter any alphabet character : ");
scanf("%c",&a);
if( a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'
    || a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U')  printf("Vowel");
else printf("Consonent");
getch();
}