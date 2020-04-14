/*Program to count number of alphabet,digits and special character in a given string.*/


#include<stdio.h>
#include<conio.h>
#define MAX 100

void main()
{

	char str[MAX];
	int i=0,a=0,d=0,sp=0;
	printf("\n Enter string:");
	gets(str);
	while(str[i]!='\0')
	{
		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
		{
			a++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			d++;
		}
		else
		{
			sp++;
		}
		i++;
	}
   printf("\n Number of alphabets in the string: %d",a);
   printf("\n Number of digits in the string: %d",d);
   printf("\n Number of special chacacters in the string: %d",sp);
	
}