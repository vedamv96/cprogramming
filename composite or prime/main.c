#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,c,count=0;
    printf("Enter the number n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=n%i;
        if(c==0)
            count=count+1;
    }
    if(count>2)
    {
        printf("The given number is composite number");
    }
    else if(n==0)
    {
        printf("The given number is neither prime nor composite");
    }
    else if(n==1)
    {
       printf("The given number is neither prime nor composite");
    }
    else
    {
        printf("The given number is prime number");
    }
}
