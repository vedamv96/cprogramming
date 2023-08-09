#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first=-1,second=1,i,third,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=-1;i<=n;i++)
    {
        third=first+second;
        printf("%d\n",third);
        first=second;
        second=third;
    }
}
