#include<stdio.h>
int main()
{
int n,x,y;
printf("enter the number:");
scanf("%d",&n);
while(n>0)
{
y=n%10;
x=x+y;
n=n/10;
}
printf("the sum of the digits is %d",x);
return 0;
}
