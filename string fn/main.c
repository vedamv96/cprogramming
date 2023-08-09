#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10]="LILLY";
    int num;
    num=strlen(name);
    printf("No of characters:%d",num);
    strcpy(name,"LILLY");
    printf("\nCopied name:%s",name);
    strcat(name,"JANE");
    printf("\nCombined name:%s",name);
    strrev(name);
    printf("\nReversed name:%s",name);

}
