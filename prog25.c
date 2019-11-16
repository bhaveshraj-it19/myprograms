#include<stdio.h>
int main()
{
int row,col, a[10][20];
int i,j,max=0,temp=0;
printf(" enter the row&column of the matrix: ");
scanf("%d %d",&row,&col);
printf(" enter the elements of the matrix: ");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&a[i][j]);
}
}
printf(" the matrix is: \n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(max<a[i][j])
{
max=a[i][j];
}
}
printf("the largest value is :%d",max);

}
return 0;
}
