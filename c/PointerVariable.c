#include<stdio.h>
int main()
{
    int *p,i,a[10];
    p=a;
    printf("please enter 10 integer number:");
    for(i=0;i<10;i++)
    scanf("%d",p++);
    
    for(p=a,i=0;i<10;i++,p++)
    printf("%d\t",*p);
    printf("\n");

    return 0;
}

