#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,j,n,temp;
    printf("Enter the value for n:");
    scanf("%d",&n);
    printf("Enter the array values:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array is:");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
