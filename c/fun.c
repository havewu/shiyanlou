#include<stdio.h>
int main()
{
  int fun(int x,int y);
  int a,b,c;
  printf("Please enter two integers with two digits:\n");
  printf("Please enter a:");
  scanf("%d",&a);
  if(a<10 || a>99)
    {
     printf("input a error!");
     return 0;
    }
  printf("Please enter b:");
  scanf("%d",&b);
  if(b<10 || b>99)
    {
     printf("input b error!");
     return 0;
    }
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
