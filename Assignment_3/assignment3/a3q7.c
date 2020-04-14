#include<stdio.h>

void main()
{
int i=2,sum=0;

while(i<100)
{
if(i%5==0){
sum=sum+i;
}
i+=3;
}
printf("%d ",sum);

i=2,sum=0;
while(i<100)
{

(i%5==0)?sum=sum+i:sum==sum;
i+=3;
}
printf("%d ",sum);
}


