// Program to convert lower case to upper case alphabets. 


#include<stdio.h>
#define MAX 20
void main()
{
	char str[MAX]; int i=0,c=0;
	printf("\n Enter srting:");
	scanf("%s",str);
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]+('A'-'a');
			i++;
		}

	}
	printf("%s",str);
	getchar();
}