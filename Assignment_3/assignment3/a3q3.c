#include<stdio.h>

void main()
{
int n,i=0,sum=0,num;
printf("enter value of n: ");
scanf("%d",&n);
while(i<n)
{
printf("enter number :");
scanf("%d",&num);
sum+=num;
i++;
}
printf("%d",(sum/n));

}

