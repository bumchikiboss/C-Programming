#include<stdio.h>

void main()
{
int i=2,sum=0;
for(;i<100;i+=3)
{
sum=sum+i;
}
printf("%d SUPER ",sum);

sum=0,i=2;
while(i<100)
{
sum=sum+i;
i+=3;
}
printf("%d SUPER ",sum);

sum=0,i=2;
do{
sum=sum+i;
i+=3;
}while(i<100);
printf("%d SUPER ",sum);
}

