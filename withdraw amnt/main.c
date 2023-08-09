#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,balance;
    printf("Enter the amount:");
    scanf("%d",&a);
    balance=10000;
    if (a<=10000)
    {
        printf("Money can be withdrawn");
    }
    else
    {
       printf("Money can't be withdrawn");
    }

}
