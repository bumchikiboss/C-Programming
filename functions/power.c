#include<stdio.h>
#include<math.h>

float findpower(int a,int b)
{
    float c;
    for(int i=0;i<b;i++)
    c=a*a;
    return(c);
}
void main()
{
    int n;
    float x,y;
    printf("\nEnter the number: ");
    scanf("%f",&x);
    printf("Enter the value of power:"); 
    scanf("%d",&n);
    y=findpower(x,n);
    printf("%f² = %f",x,y);
}