#include<stdio.h>
#include<math.h>

void findroots(int a,int b,int c)
{
    int r1,r2;
    float d;
    d=(pow(b,2)-(4*a*c));
    r1=((-b)+(pow(d,0.5)))/(2*a);
    r2=((-b)-(pow(d,0.5)))/(2*a);
    printf("Roots are : %d and %d",r1,r2);

}
void main()
{
    int a,b,c;
    printf("\nEnter the coefficients of the quadratic equation : Ax² + Bx + C = 0\n");
    printf("Enter A:"); scanf("%d",&a);
    printf("Enter B:"); scanf("%d",&b);
    printf("Enter C:"); scanf("%d",&c);
    findroots(a,b,c);
}