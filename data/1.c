#include<stdio.h>

int main()
{
  int maxsum(int arr[],int n);
  int n,sum;
  int arr1[]={-2,11,-4,13,-5,2,-5,-3,12,-9};
  int arr2[]={0,-3,6,8,-20,21,8,-9,10,-1,3,6,5};

  n=sizeof(arr1)/sizeof(arr1[0]);
  sum = maxsum(arr1,n);
  printf("arr1,maxsum:%d\n",sum);

  n=sizeof(arr2)/sizeof(arr2[0]);
  sum = maxsum(arr2,n);
  printf("arr2,maxsum:%d\n",sum);

  return 0;
}

int maxsum(int arr[],int n)
{
  int i,j,max=0,sum=0;
  printf("arr,len:%d\n",n);
  for(i=0;i<n;i++)
  { 
    sum = 0;
    if(arr[i]<=0)continue;
    for(j=i;j<n;j++)
    {
      sum = sum + arr[j];
      if(max < sum)
      {
         max =sum;
      }
    }
  }
  return max;
}
