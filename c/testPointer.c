#include<stdio.h>
int main()
{
  int a[10]={10,11,12,13,14,15,16,17,18,19};
  int *p;
  p=a;
  printf("*p++:%d\n",*(p++));
  p=a;
  printf("* p:%d\n",*p);
  p=a;
  printf("*(++p):%d\n",*(++p));
  return 0;
}
