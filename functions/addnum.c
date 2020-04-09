/* Program to Add numbers and checking the Larger one.*/

#include<stdio.h>
int addnum(int,int);
int maxnum(int,int);
void main()
{
    int a,b;
    printf("\n Enter 2 numbers :");
    scanf("%d %d",&a,&b);
    printf("\n Sum:");
    addnum(a,b);
    printf("\n Max:");
    maxnum(a,b);
    }
 int addnum(int a,int b)
 {
     printf(" %d",a+b);
     return(0);
 }
int maxnum(int a,int b)
{
    if(a>b)printf("%d",a);
    else if(a==b)printf(" Equal.");
    else printf("%d",b);
}