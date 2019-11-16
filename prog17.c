#include<stdio.h>
int main()
{
int n,a[n],i,sum=0;
printf("enter how many numbers you want add:");
scanf("%d",&n);
printf("enter the numbers you want to add:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("the sum of the given numbers is %d",sum);
return 0;
}
