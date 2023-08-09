#include <stdio.h>
              #include <stdlib.h>

              int main()
             {
                  int a,b,c,x,y;
                  printf("Enter the three numbers:");
                  scanf("%d %d %d",&a,&b,&c);
                  x=a>b?a>c?a:c:b>c?b:c;
                  printf("Largest number is:%d\n",x);
                  y=a<b?a<c?a:c:b<c?b:c;
                  printf("Smallest number is:%d",y);
             }
