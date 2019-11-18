#include<stdio.h>
int main()
{
char ch;
printf("enter any character:");
scanf("%c",&ch);
if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
{
printf("It is an alphabet");
}
else
{
printf("It is a number");
}
return 0;
}
