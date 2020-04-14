#include<stdio.h>

void main()
{
int j,i,sum=0,g,e;
printf("enter starting point, ending point, gap : \n");
scanf("%d%d%d",&i,&e,&g);
j=i;

for(;i<e;i+=g)
{
sum=sum+i;
}
printf("%d ",sum);

sum=0,i=j;
while(i<e)
{
sum=sum+i;
i+=g;
}
printf("%d ",sum);

sum=0,i=j;
do{
sum=sum+i;
i+=g;
}while(i<e);
printf("%d ",sum);
}

