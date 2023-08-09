#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("Enter the numbers:");
   scanf("%d %d",&a,&b);
   c=a*a+b*b+2*a*b;
   printf("answer is:%d\n",c);
   c=a*a+b*b-2*a*b;
   printf("answer is:%d",c);
}
