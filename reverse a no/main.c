#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rem,reverse=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    printf("Reversed number is:%d",reverse);
}
