#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}a#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,originalnum,rem,result=0;
    printf("Enter the three digit number:");
    scanf("%d",&num);
    originalnum=num;
    while (originalnum!=0)
    {
        rem=originalnum%10;
        result=result+(rem*rem*rem);
        originalnum=originalnum/10;
    }
    if (num==result)
    {
        printf("%d is Armstrong Number",num);
    }
    else
    {
        printf("%d is Not Armstrong Number",num);
    }
}

