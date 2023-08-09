#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,count=0;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a;
    while(b>0)
    {
        c=a%10;
        b=b/10;
        count++;
    }
    printf("No of digits are %d",count);
}
