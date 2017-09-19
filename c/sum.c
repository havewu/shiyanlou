#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  int sum=0;
  for(;argc>1;argc--)
  {
    sum += atoi(argv[argc-1]);
  }
  printf("%d\n",sum);
  return 0;
}
