/* Program to print the size of a given string and then print its reverse.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char x[50];
	int s=0,i=0;
	printf("enter the string: ");
	scanf("%s",x);
	while (x[i]!='\0')
	{
		s++;
		i++;
	}
	printf("%s",x);
	printf("\n size is %d",s);
	for(i=0;i<s;i++)
	{
		printf("\n %c",x[s-1-i]);
	}
	getch();
}