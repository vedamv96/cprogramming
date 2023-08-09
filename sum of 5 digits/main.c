#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rem,result=0;
    printf("Enter any 5 digit number:");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        result=result+rem;
        n=n/10;
    }
    printf("Sum of the given 5 digit number is:%d",result);
}

