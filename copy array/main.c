#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n,a[20],b[20];
   printf("Enter the value for n:");
   scanf("%d",&n);
   printf("Enter the array elements:");
   for (i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for (i=0;i<n;i++)
   {
       b[i]=a[i];
   }
   printf("Elements of first array:");
   for (i=0;i<n;i++)
   {
       printf("%d\t",a[i]);
   }
   printf("\nElements of second array:");
   for (i=0;i<n;i++)
   {
       printf("%d\t",b[i]);
   }

}
