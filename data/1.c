#include<stdio.h>

int main()
{
  int maxsum(int arr[]);
  int sum;
  int arr1[]={-2,11,-4,13,-5,2,-5,-3,12,-9};
  int arr2[]={0,-3,6,8,-20,21,8,-9,10,-1,3,6,5};
  sum=sizeof(arr1)/sizeof(arr1[0]);
  printf("arr1,len:%d\n",sum);
  sum=sizeof(arr2)/sizeof(arr2[0]);
  printf("arr2,len:%d\n",sum);
  
  sum = maxsum(arr1);
  printf("arr1,maxsum:%d\n",sum);
  sum = maxsum(arr2);
  printf("arr2,maxsum:%d\n",sum);

}

int maxsum(int arr[])
{
  int n,i,j,max=0,sum=0;
  n=sizeof(arr)/sizeof(arr[0]);
  printf("arr,len:%d\n",n);
  for(i=0;i<n;i++)
  { 
    sum = 0;
    if(arr[i]<=0)continue;
    for(j=i;j<n;j++)
    {
      sum = sum + arr[j];
      if(max < sum) max =sum;
    }
  }


  return max;
}
