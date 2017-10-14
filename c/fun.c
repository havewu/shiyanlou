#include<stdio.h>
int main()
{
  int fun(int x,int y);
  int a,b,c;
  printf("Please enter a:");
  scanf("%d",&a);
  printf("Please enter b:");
  scanf("%d",&b);
  c=fun(a,b);
  printf("%d",c);
  return 0;
}
int fun(int x,int y)
{
  int z;
  z = (x-x%10) + x%10*1000 + (y-y%10)*10 + y%10;
  return z;
}
