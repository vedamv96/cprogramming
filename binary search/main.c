#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,low,high,mid,n,search,array[100];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("Enter value to find:");
    scanf("%d",&search);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while (low <= high)
    {
    if(array[mid]<search)
    {
       low = mid + 1;
    }
    else if (array[mid]==search)
    {
       printf("%d FOUND",search,mid+1);
       break;
    }
    else
    {
        high=mid-1;
        mid=(low+high)/2;
    }

    }
    if(low > high)
    printf("%d NOT FOUND",search);
}

