#include<stdio.h>
#include<string.h>
int main()
{
   int i,n;
   char a[20];
   printf("Enter the String \n");
   gets(a);
   n=strlen(a);
   printf("Reversed string is ");
   for(i=n-1;i>=0;i--)
   {
      printf("%c",str[i]);
   }
}
