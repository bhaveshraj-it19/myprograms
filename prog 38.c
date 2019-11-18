#include<stdio.h>
int main()

{
int a,b,i;
printf("Enter the first number\t");
scanf("%d",&a);
printf("Enter the last number\t");
scanf("%d",&b);
for(i=a;i<b;i++)
{
printf("%d\t",i);
}
return 0;
}
