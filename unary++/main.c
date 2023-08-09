#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b;
    b=a++;
    printf("post increment:%d\n",b);
    b=++a;
    printf("pre increment:%d",b);

}
