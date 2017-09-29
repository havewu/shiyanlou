#include<stdio.h>
int main()
{
  int i,j,n,hole[10]={1,2,3,4,5,6,7,8,9,10};
  n=1;
  j=2;
  for(i=0;i<1000;i++)
  {
   // printf("round%d:i=%d\n",i,i);
    if (n>10) n = n%10;
   // printf("round%d:n=%d\n",i,n);
    hole[n-1]=0;
    n += j;
   // printf("round%d:n=%d\n",i,n);
    j++;
   // printf("round%d:j=%d\n",i,j);
  }
  for(i=0;i<10;i++)
  if(hole[i] != 0) printf("%d\n",hole[i]); 
  return 0;
}
