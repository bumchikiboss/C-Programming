#include<stdio.h>
#include<stdlib.h>

struct date
{
   int date,mon,year; 
};

struct date input()
{   
    struct date s2;
    printf("Enter Date: ");scanf("%d",&s2.date);
    printf("Enter Month: ");scanf("%d",&s2.mon);
    printf("Enter Year: ");scanf("%d",&s2.year);
    return s2;
}

struct date validate(struct date a)
{
    //int flag=0;
    if(a.year<1)
    {
        printf("\n not valid");
    exit(0);
    }
    if(a.mon>12 || a.mon<1)
    {
        printf("\n not valid");
    exit(0);
    }
    if(a.mon==1 && a.date>31 || a.mon==3 && a.date>31 || a.mon==5 && a.date>31|| a.mon==7 && a.date>31 || a.mon==8 && a.date>31 || a.mon==10 && a.date>31 || a.mon==12 && a.date>31)
    {
         printf("\n not valid");
    exit(0);
    }
    else if(a.mon==2)
     {
         if(a.year%4==0 && a.date>29)

               {
                   printf("\n not valid");
               exit(0);
               }
        
        else if(a.year%4!=0 && a.date>28)
            {
                   printf("\n not valid");
               exit(0);
               }

     }
     else if(a.mon==4 && a.date>30 || a.mon==6 && a.date>30 || a.mon==9 && a.date>30 || a.mon==11 && a.date>30 )

     {
          printf("\n not valid");
    exit(0);
     }
     else
       { printf("\n VALID ");}
}

struct date display(struct date y)
{
    
     switch(y.mon)
   {
       case 1 : printf("\n January %d,%d",y.date,y.year);
                break;
       case 2 : printf("\n February %d,%d",y.date,y.year);
                break;
       case 3 : printf("\n March %d,%d",y.date,y.year);
                break;
       case 4 : printf("\n April %d,%d",y.date,y.year);
                break;
       case 5 : printf("\n May %d,%d",y.date,y.year);
                break;
       case 6 : printf("\n June %d,%d",y.date,y.year);
                break;
       case 7 : printf("\n July %d,%d",y.date,y.year);
                break;
       case 8 : printf("\n August %d,%d",y.date,y.year);
                break;
       case 9 : printf("\n September %d,%d",y.date,y.year);
                break;
       case 10 : printf("\n October %d,%d",y.date,y.year);
                break;
       case 11 : printf("\n November %d,%d",y.date,y.year);
                break;
       case 12 : printf("\n December %d,%d",y.date,y.year);
                break;
}
}

void main()
{   
    int x;
    struct date s1;
    s1=input();
    validate(s1);
    display(s1);
    
}