#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[10],n,i,sum=0;
   printf("Enter the value for n:");
   scanf("%d",&n);
   printf("Enter the array elements:");
   for (i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for (i=0;i<n;i++)
   {
       sum=sum+a[i];
   }

   printf("Sum of elements in the array:%d",sum);

}

