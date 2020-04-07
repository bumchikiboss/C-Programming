#include<stdio.h>

void main()
{
char status;
float balance;
printf("enter balance : ");
scanf("%f",&balance);
(balance>0)?status='O' : ((balance==0)?status='C':printf("wrong input"));
printf("STATUS: %c",status);
}
