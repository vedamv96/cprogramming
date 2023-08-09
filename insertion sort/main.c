#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,j,n,temp;
    printf("Enter the value for n:");
    scanf("%d",&n);
    printf("Enter the array values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=1;i<n;i++)
    {
        j=j-1;
        temp=a[i];
        while (j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=temp;
    }
    printf("The sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
