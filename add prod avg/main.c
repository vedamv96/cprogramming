#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("enter the 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    d=a+b+c;
    printf("sum:%d\n",d);
    d=a*b*c;
    printf("product:%d\n",d);
    d=(a+b+c)/3;
    printf("avg:%d",d);

}
