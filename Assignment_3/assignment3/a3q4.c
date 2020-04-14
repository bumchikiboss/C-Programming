#include<stdio.h>

void main()
{
char ch;
printf("Enter any character : ");
scanf("%c",&ch);
if(ch=='Z') ch='A';
else if(ch=='z') ch='a';
else if(ch=='9') ch='0';
else ch=ch+1;
printf("character : %c",ch);


}

