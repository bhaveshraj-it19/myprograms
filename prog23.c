#include<stdio.h>
#include<string.h>
int main()
{
int n,i,sum=0;
char a[n];
printf("enter how many strings to add:");
scanf("%d",&n);
printf("enter your strings:\t");
scanf("%s",a);
for (i=0;i<n;i++)
{
printf("the ASCII value of %c is %d\n",a[i],a[i]);

sum=sum+a[i];
printf("%d",sum);
}
return 0;
}
