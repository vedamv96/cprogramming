#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,dec,rem,base=1,i,binno=0;
    printf("Enter the decimal number:");
    scanf("%d",&num);
    for (i=0;i<=dec;i++)
    {
        rem=num%2;

        num=num/2;

        binno=binno+rem*base;

        base=base*10;


    }
    printf("The binary num:%d",binno);
}
