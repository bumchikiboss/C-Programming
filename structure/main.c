#include<stdio.h>

struct det 
{
    int day;
    int mon;
    int year;
}; 

int main()
{
    struct det a;
    printf("Enter Year :"); 
    scanf("%d",&a.year);
    printf("Enter Month :"); 
    scanf("%d",&a.mon);
    if(a.mon>12|| a.mon<=0)
     {
      printf("Entered month is invalid changed to default as 1\n"); 
      a.mon=1;
     }
    printf("Enter Day :");
    scanf("%d",&a.day);
    if(a.mon==1 || a.mon==3 || a.mon==5 || a.mon==7|| a.mon==8 || a.mon==10|| a.mon==12)
      {
       if(a.day<=0 || a.day>31)
        {
          printf("Entered day is invalid changed to default as 1\n"); 
          a.day=1;
        }
      }
    else if(a.mon==4 ||a.mon==6|| a.mon==9|| a.mon==11)
      {
       if(a.day<=0 || a.day>30)
        {
          printf("!!!Entered day is invalid changed to default as 1\n"); 
          a.day=1;
        }  
      }
   else if(a.mon==2)
      {
       if(a.year%4==0 && (a.day<0 || a.day>29) )
          {
           printf("!!!Entered day is invalid changed to default as 1\n"); 
           a.day=1;
          }
       else if(a.day<0 || a.day>28)
           {
           printf("!!!Entered day is invalid changed to default as 1\n"); 
           a.day=1;
          }

      }  


    printf(" Date a is : %d-%d-%d",a.day,a.mon,a.year);
}
