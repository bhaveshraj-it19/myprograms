#include <stdio.h>

int main()
{
    int a[100];
    int n, i, j, temp;
    printf("Input the size of array : ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
      {
	      scanf("%d",&a[i]);
	    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j] <a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Elements of array in ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", a[i]);
}
	      return 0;
}
