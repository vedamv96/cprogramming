#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,i,n,c,count=0;
     printf("Enter the range:");
     scanf("%d",&n);
     for(a=1;a<=n;a++)
     {
         for(i=1;i<=n;i++)
         {
             c=a%i;
             if(c==0)
             {
                 count=count+1;
             }
         }
         if (count==2)
         {
             printf("%d\n",a);

         }
         count=0;
     }

