#include<stdio.h>
int main()
{
  int i,j,n;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=n-i;j>0;j--)
      printf(" ");
    for(j=1;j<=2*i-1;j++)
      printf("*");
    printf("\n");
  }
  for(i=n-1;i>0;i--)
  {
    for(j=1;j<=n-i;j++)
    printf(" ");
    for(j=2*i-1;j>0;j--)
      printf("*");
    printf("\n");
  }
}
