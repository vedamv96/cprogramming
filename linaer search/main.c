#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[10],i,size,key,find=0;
   printf("Enter the size:");
   scanf("%d",&size);
   printf("Enter the values of array a:");
   for(i=0;i<5;i++)
   {
       scanf("%d",&a[i]);
   }
       printf("Enter the key value:");
       scanf("%d",&key);

   for (i=0;i<5;i++)
   {
       if(a[i]==key)
        find=1;
   }
   if (find==1)
    printf("Key value found");
   else
    printf("Key value not found");
}
