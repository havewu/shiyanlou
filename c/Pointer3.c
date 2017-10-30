#include<stdio.h>
int main()
{
 int n,i,k,*p;//n : people number; k:n--;
 int a[3]={11,22,33};
 printf("Enter the number of people:");
 scanf("%d",&n);
 printf("n=%d\n",n);
 int arr[n];
  for(i=0;i<n;i++)
   arr[i]= i+1;

 k=n;

  for(p=arr;p<(arr+n);p++)
    printf("%p,*p=%d\n",p,*p);
// while(k>0)
// {
    
// }
 return 0;
}
