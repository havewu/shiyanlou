#include<stdio.h>
int main()
{
  float num[20],avg = 0;
  int n=0,i;
  printf("Enter 20 number:\n");
  for(i=0;i<20;i++)
  {
    scanf("%f",&num[i]);
    avg += num[i];
  }
  avg = avg/20;
  for(i=0;i<20;i++)
    if(num[i]>avg) n += 1;
  printf("avg=%f\n>avg:%d\n",avg,n);
  return 0;
}

