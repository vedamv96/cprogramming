#include <stdio.h>
#include <stdlib.h>

int main()
{
     int no,bs,da,ta,hra,gross,net; float it;
    char name[20];
    printf("enter the employee name:");
    scanf("%s",name);
    printf("enter the employee number:");
    scanf("%d",&no);
    printf("enter the basic salary:");
    scanf("%d",&bs);
    printf("enter the DA:");
    scanf("%d",&da);
    printf("enter the TA:");
    scanf("%d",&ta);
    printf("enter the HRA:");
    scanf("%d",&hra);
    it=0.15*bs;
    bs=bs-it;
    printf("basic salary after the reduction of it:%d\n",bs);
    gross=bs+da+ta+hra+it;
    printf("gross salary:%d\n",gross);
    net=bs+da+ta+hra;
    printf("net salary:%d",net);

}
