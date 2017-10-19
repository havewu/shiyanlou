#include<stdio.h>
int main()
{
 int n,*p;
 int a[3]={11,22,33};
 p=a;
 printf("%d\n",*p);
 printf("%d\n",*(p+1));
 printf("%d\n",*(p+2));
 printf("%d\n",*(p+3));
 printf("%d\n",*(p+4));
 return 0;
}
