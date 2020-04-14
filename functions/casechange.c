/* Programme to change the case of Alphabet */
#include<stdio.h>


int lower(char ch)
{
    return(ch>='a' && ch<='z');
}
int upper(char ch)
{
    return(ch>='A' && ch<='Z');
}
char casechange(char ch)
{
    if(upper(ch))
         return(ch+('a'-'A'));
    else if(lower(ch))
            return(ch-('a'-'A'));
    else
        printf("\n Invalid Entry");
}
int main()
{
    char ch;
    printf("\n Enter the Character:");
    scanf("%c",&ch);
    if(upper(ch))
         printf("\n Character is Upper Case.");
    else if(lower(ch))
            printf("\n Character us lower Case.");
    else
        printf("\n Character is not alphabet.");
    printf("\n The Changed Character is: %c",casechange(ch));
    return(0);
}